cmake_minimum_required(VERSION 3.5)

project(ANNMu)

set(THREADS_PREFER_PTHREAD_FLAG ON)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-O3")

include_directories("/Users/parzival/Library/Mobile Documents/com~apple~CloudDocs/Projekty/C++ ANNMu/include/")
include_directories("/usr/local/mysql-connector-c++/include/jdbc")
include_directories("/usr/local/include")

link_directories("/usr/local/mysql-connector-c++/lib64")

find_package(Threads REQUIRED)

set(
    annmu
    ./src/ANNMu/http/request.cpp
    ./src/ANNMu/http/client.cpp
    ./src/ANNMu/http/response.cpp
    ./src/ANNMu/log/log.cpp
    ./src/ANNMu/config/config.cpp
    ./src/ANNMu/url/url.cpp
    ./src/ANNMu/url/coding.cpp
    ./src/ANNMu/url/migration.cpp
    ./src/ANNMu/routing/router.cpp
    ./src/ANNMu/mvc/model.cpp
    ./src/ANNMu/mvc/view.cpp
    ./src/ANNMu/mvc/controller.cpp
    ./src/ANNMu/form/simple.cpp
    ./src/ANNMu/form/token.cpp
)

set(
    web
    ./src/web/routerFactory.cpp
    ./src/web/controllerFactory.cpp
    ./src/web/homepage/model.cpp
    ./src/web/homepage/view.cpp
    ./src/web/homepage/controller.cpp
    ./src/web/contact/model.cpp
    ./src/web/contact/view.cpp
    ./src/web/contact/controller.cpp
)

set(
    tests
    ./src/tests/http/client.cpp
    ./src/tests/http/request.cpp
    ./src/tests/http/response.cpp
    ./src/tests/config/config.cpp
    ./src/tests/log/log.cpp
    ./src/tests/form/simple.cpp
)


#
# 
# Compilation
# - please, don't change this part 
#
#

add_executable(
    index.cgi
    ./src/main.cpp
    ${annmu}
    ${web}
)

add_executable(
    tests.cgi
    ./src/tests.cpp
    ${annmu}
    ${tests}
)

target_link_libraries(index.cgi mysqlcppconn)

set(
    binaries
    index.cgi
    tests.cgi
)

set_target_properties(index.cgi
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/www"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/www"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/www"
)

set_target_properties(tests.cgi
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/tests"
)

foreach(target ${BINARIES})
    if ( CMAKE_CXX_COMPILER_ID MATCHES "Clang|AppleClang|GNU" )
        target_compile_options( ${target} PRIVATE -Wall -Wextra -Wunreachable-code -Wpedantic)
    endif()
    if ( CMAKE_CXX_COMPILER_ID MATCHES "MSVC" )
        target_compile_options( ${target} PRIVATE /W4 )
        target_compile_options( ${target} PRIVATE /utf-8 )
    endif()
endforeach()
