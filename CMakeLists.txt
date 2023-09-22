cmake_minimum_required(VERSION 3.14)

project(Basic_Sorting_Algorithms LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Basic_Sorting_Algorithms
  main.cpp

  selection_sort.h
  bubble_sort.h

  test_array.h
)
target_link_libraries(Basic_Sorting_Algorithms Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Basic_Sorting_Algorithms
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
