from conans import ConanFile
from conan.tools.cmake import CMakeToolchain, CMake
from conan.tools.layout import cmake_layout


class HelloConan(ConanFile):
    name = "hello"
    version = "0.1"

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "src/*"

    def config_options(self):
        if self.settings.os == "Windows":
            del self.options.fPIC

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()  # creates conan_toolchain.cmake

    def build(self):
        cmake = CMake(self)
        cmake.configure()  # same as cmake . -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
        cmake.build()  # same as cmake --build . --config <build_type>

    def package(self):
        cmake = CMake(self)
        cmake.install()  # same as cmake --install .

    def package_info(self):
        self.cpp_info.libs = ["hello"]
