project(fixed_len_sliding_window)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# the scope of cpp_files is in this CMakeLists.txt file
file(GLOB cpp_files "*.cpp")

foreach (cpp_file ${cpp_files})
    get_filename_component(filename ${cpp_file} NAME_WE)
    add_executable(${filename} ${cpp_file})
endforeach ()