cmake_minimum_required (VERSION 3.8)

add_library(lab3_do_while_lib "../do_while/do_while.c")

target_include_directories(lab3_do_while_lib PUBLIC "../do_while")

add_executable(lab3_do_while "main.c")

target_link_libraries(lab3_do_while lab3_do_while_lib)