cmake_minimum_required(VERSION 3.14)
project(PROG_2007 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PROG_2007 Variables/helloworld/main.c)
add_executable(C_to_F Variables/C-To-F/main.c)
add_executable(Example-2 Variables/Example-2/main.c)
add_executable(Example-3 Variables/Example-3/main.c)
add_executable(Example-4 Variables/Example-4/main.c)
add_executable(Example-5 Variables/Example-5/main.c)
add_executable(Explicit-example Variables/Explicit-example/main.c)

add_executable(Simple-for_loop Loops/Simple-for_loop/main.c)
add_executable(Triangular-numbers Loops/Triangular-numbers/main.c)
add_executable(Squares Loops/Squares/main.c)
add_executable(digit_sum Loops/digit_sum/main.c)
add_executable(incerments_deincements Loops/incerments_deincements/main.c)
add_executable(decisions Loops/decisions/main.c)
add_executable(evenly_divisable Loops/evenly_divisable/main.c)
add_executable(divide Loops/divide/main.c)