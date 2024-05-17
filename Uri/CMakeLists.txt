# CMakeLists.txt for Uri

cmake_minimum_required(VERSION 3.8)
project(UriLibrary)
set(This Uri)

set(Headers
    include/Uri/Uri.hpp
    # src/CharacterSet.hpp
    # src/PercentEncodedCharacterDecoder.hpp
)

set(Sources
    # src/CharacterSet.cpp
    # src/PercentEncodedCharacterDecoder.cpp
    src/Uri.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
set_target_properties(${This} PROPERTIES
    FOLDER Libraries
)

target_include_directories(${This} PUBLIC include)

# Optionally, you can specify the output directory for the compiled library
# set_target_properties(Uri PROPERTIES
#     ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
#     LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
#     RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
# )
# Specify the version of the library (optional)
# set_target_properties(Uri PROPERTIES VERSION 1.0 SOVERSION 1)


# target_link_libraries(${This} PUBLIC
#     StringExtensions
# )

enable_testing()
add_subdirectory(test)
