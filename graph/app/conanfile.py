from conans import ConanFile
from conan.tools.cmake import CMake
from conan.tools.layout import cmake_layout


class AppConan(ConanFile):
    name = "app"
    version = "0.1"
    package_type = "application"

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "src/*"
    requires = "chat/0.1"
    generators = "CMakeToolchain", "CMakeDeps"

    def layout(self):
        cmake_layout(self)

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()
