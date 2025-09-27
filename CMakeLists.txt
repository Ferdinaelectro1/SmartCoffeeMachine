cmake_minimum_required(VERSION 3.2)

project(SMARTCOFFEE)

add_executable(
    ${PROJECT_NAME}
    main.cpp
    src/Context.cpp
    src/Logger.cpp
)

