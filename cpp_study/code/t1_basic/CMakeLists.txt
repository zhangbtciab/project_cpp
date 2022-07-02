link_directories(include)

aux_source_directory(. basic_source)
add_executable(basic ${basic_source})