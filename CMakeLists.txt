# cmake_minimum_required(VERSION <specify CMake version here>)
project(trabajos)

set(CMAKE_CXX_STANDARD 17)

add_executable(trabajos main.cpp Almacen.cpp Almacen.h slot.cpp slot.h producto.cpp producto.h importaciones.h Robot.h
        Robot.cpp Orden.h Orden.cpp)