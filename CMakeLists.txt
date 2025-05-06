cmake_minimum_required(VERSION 3.10)
project(EmpleadosPolimorfismo)

set(CMAKE_CXX_STANDARD 17)

# Agrega todos los archivos fuente desde la carpeta src
file(GLOB SOURCES "src/*.cpp")

add_executable(EmpleadosApp ${SOURCES})
