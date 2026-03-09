add_library(functions ${CMAKE_SOURCE_DIR}/src/functions/sum.cpp)
target_include_directories(functions PUBLIC ${CMAKE_SOURCE_DIR}/include/functions)