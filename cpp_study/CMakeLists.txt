project(cpp_study CXX)

add_subdirectory(code/t1_basic)
add_subdirectory(code/t2_class)
add_subdirectory(code/t3_template)
add_subdirectory(code/t4_memory)
add_subdirectory(code/t5_stl)
add_subdirectory(code/t6_thread)

set(${EXECUTABLE_OUTPUT_PATH} ${PROJECT_SOURCE_DIR}/bin)