add_executable(bin main.cpp)

add_subdirectory(add)
add_subdirectory(divide)
add_subdirectory(multiply)

target_link_libraries( bin PRIVATE add divide multiply)

# target_link_directories(add PRIVATE ${CMAKE_SOURCE_DIR}/src/add)
# target_link_libraries(add add)

# include_directories(${CMAKE_SOURCE_DIR}/src)
# include_directories(${CMAKE_SOURCE_DIR}/src/add)
# include_directories(${CMAKE_SOURCE_DIR}/src/divide)
# target_include_directories(add PRIVATE add)

