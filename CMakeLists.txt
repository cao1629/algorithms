cmake_minimum_required(VERSION 3.20)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

file(GLOB cpp_files "*.cpp")

foreach (cpp_file ${cpp_files})
    get_filename_component(filename ${cpp_file} NAME_WE)
    add_executable(${filename} ${cpp_file})
endforeach ()

add_subdirectory(fixed_len_sliding_window)