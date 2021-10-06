#include <iostream>
#include <curl/curl.h>

int main(int argc, char** argv){
    CURL *curl;
    int retval = 0;

    curl_version_info_data* id = curl_version_info(CURLVERSION_NOW);
    if (!id) return 1;
    std::cout << "\nversion: " << id->version;
    std::cout << "\nssl version: "<< id->ssl_version << "\n";

    curl = curl_easy_init();
    if(!curl) {
        std::cout << "Failed to init curl\n";
        return 3;
    }

    /* provide a buffer to store errors in */
    char errbuf[CURL_ERROR_SIZE];
    curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, errbuf);
    // good one to try is https://catfact.ninja/fact
    curl_easy_setopt(curl, CURLOPT_URL, argv[1] );
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);

    /* Perform the request, res will get the return code */
    CURLcode res = curl_easy_perform(curl);
    /* Check for errors */
    if(res != CURLE_OK)
        std::cout << "curl_easy_perform() failed: " << curl_easy_strerror(res) << "\n";

    /* always cleanup */
    curl_easy_cleanup(curl);
    std::cout << "Succeed\n";

    return retval;
}