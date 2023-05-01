add_subdirectory(add)
add_subdirectory(divide)

# target_link_directories(add PRIVATE ${CMAKE_SOURCE_DIR}/src/add)
# target_link_libraries(add add)
add_executable(bin main.cpp)

