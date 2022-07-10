aux_source_directory(. memory)
set(${EXECUTABLE_OUTPUT_PATH} ${CMAKE_SOURCE_DIR}/bin)
add_executable(memory ${memory})