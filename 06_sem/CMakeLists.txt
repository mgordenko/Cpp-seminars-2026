add_executable(task_06_01 01_task/main.cpp)
add_executable(task_06_02 02_task/main.cpp)
add_executable(task_06_03 03_task/main.cpp)
include_directories(04_task/include)
add_executable(task_06_04
        04_task/main.cpp
        04_task/src/calculator.cpp
)
include_directories(05_task/include)
add_executable(task_06_05
        05_task/main.cpp
        05_task/src/sort3.cpp
)