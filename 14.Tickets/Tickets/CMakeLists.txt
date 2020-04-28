cmake_minimum_required(VERSION 3.17)

project("Tickets")

add_executable("${PROJECT_NAME}" "Startup.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "Startup.cpp" DESTINATION src)

