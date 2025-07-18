cmake_minimum_required(VERSION 3.10)
project(MeuProjeto C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Adiciona o subdiretório da biblioteca
add_subdirectory(lib)

# Bubble Sort
add_executable(bubbleSort sort/bubbleSort.c)
target_link_libraries(bubbleSort PRIVATE util)
target_include_directories(bubbleSort PRIVATE lib)

# Selection Sort
add_executable(selectionSort sort/selectionSort.c)
target_link_libraries(selectionSort PRIVATE util)
target_include_directories(selectionSort PRIVATE lib)

# Insertion Sort
add_executable(insertionSort sort/insertionSort.c)
target_link_libraries(insertionSort PRIVATE util)
target_include_directories(insertionSort PRIVATE lib)
