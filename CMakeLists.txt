CMAKE_MINIMUM_REQUIRED ( VERSION 3.2 )
PROJECT ( typegrind-examples )

SET(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/../vendor/ejdb-install" ${CMAKE_PREFIX_PATH})

ADD_SUBDIRECTORY(logger_buffered_binary)

INCLUDE_DIRECTORIES(usr-include/c++/5)
INCLUDE_DIRECTORIES(usr-include/c++/x86_64-linux-gnu)
INCLUDE_DIRECTORIES(logger_buffered_binary/include)

ADD_SUBDIRECTORY(vector_push_back)
