# CMakeLists.txt for UriTests

cmake_minimum_required(VERSION 3.8)
set(This UriTests)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(Sources
    src/UriTests.cpp
    # src/CharacterSetTests.cpp
    # src/PercentEncodedCharacterDecoderTests.cpp
)

add_executable(${This} ${Sources})
set_target_properties(${This} PROPERTIES
    FOLDER Tests
)

# target_include_directories(${This} PRIVATE ..)

target_link_libraries(${This} PUBLIC
    gtest_main
    Uri
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
