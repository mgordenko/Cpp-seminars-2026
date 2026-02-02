add_executable(task_07_01_sem_exercise 01_exercise/main.cpp)
add_executable(task_07_02_sem_exercise 02_exercise/main.cpp)
add_executable(task_07_03_sem_exercise 03_exercise/main.cpp)
add_executable(task_07_04_sem_exercise 04_exercise/main.cpp)
add_executable(task_07_05_sem_exercise 05_exercise/main.cpp)
add_executable(task_07_06_sem_exercise 06_exercise/main.cpp)
add_executable(task_07_07_sem_exercise 07_exercise/main.cpp)
add_executable(task_07_08_sem_exercise 08_exercise/main.cpp)
add_executable(task_07_09_sem_exercise 09_exercise/main.cpp)
add_executable(task_07_10_sem_exercise 10_exercise/main.cpp)

add_executable(task_07_01_sem_task
        01_task/src/array_utils.cpp
        01_task/main.cpp
)
target_include_directories(task_07_01_sem_task PRIVATE 01_task/include)

add_executable(task_07_02_sem_task
        02_task/src/array_utils.cpp
        02_task/main.cpp
)
target_include_directories(task_07_02_sem_task PRIVATE 02_task/include)

add_executable(task_07_03_sem_task
        03_task/array_utils.cpp
        03_task/main.cpp
)
target_include_directories(task_07_03_sem_task PRIVATE 03_task/)