cmake_minimum_required(VERSION 3.17)
project(Gym_Membership_Application)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Gym_Membership_Application
        Free.cpp
        Free.hpp
        Gold.cpp
        Gold.hpp
        main.cpp
        Silver.cpp
        Silver.hpp
        User.cpp
        User.hpp
        User_Inventory.cpp
        User_Inventory.hpp)
