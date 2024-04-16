cmake_minimum_required(VERSION 3.22)

project(asio_example)

message(STATUS "Edit these paths according to your system")
SET(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_DIR}/bin")
SET(BOOST_ROOT "${CMAKE_CURRENT_LIST_DIR}/../boost/boost_1_71_0")
SET(OPENSSL_ROOT_DIR "${CMAKE_CURRENT_LIST_DIR}/../boost/OpenSSL")

set(Boost_version 1.71.0)
find_package(Boost ${Boost_version} REQUIRED EXACT)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

find_package(OpenSSL REQUIRED)
if(OPENSSL_FOUND)
    include_directories(${OPENSSL_INCLUDE_DIR})
endif()

add_compile_definitions(BOOST_AUTO_LINK_NOMANGLE)

add_subdirectory(src)

