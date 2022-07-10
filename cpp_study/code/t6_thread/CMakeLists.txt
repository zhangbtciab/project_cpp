aux_source_directory(. thread)
set(${EXECUTABLE_OUTPUT_PATH} ${CMAKE_SOURCE_DIR}/bin)
add_executable(thread ${thread})