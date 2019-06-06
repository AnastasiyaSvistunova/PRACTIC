# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

add_library(lab2_task3_lib STATIC "../task1/task1.c" "../task2/task2.c")
target_include_directories(lab2_task3_lib PUBLIC "../task1" "../task2")
add_executable(lab2_task3 "task3.c")
target_link_libraries(lab2_task3 lab2_task3_lib)