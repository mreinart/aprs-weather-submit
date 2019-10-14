cmake_minimum_required(VERSION 3.15)
project(aprs_weather_submit C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(aprs_weather_submit
    aprs-is.c
    aprs-is.h
    aprs-wx.c
    aprs-wx.h
    getopt-windows.h
    main.c
    main.h)
