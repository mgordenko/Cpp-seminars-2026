cmake_minimum_required(VERSION 3.10)
project(how_to_cmake)
# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# ГоворимCMake,гдеискатьзаголовочныефайлы
include_directories(include)
# Собираем исполняемый файлиз всех .cpp-файлов
add_executable(my_project
        src/math_utils.cpp
        src/calculator.cpp
        main.cpp)