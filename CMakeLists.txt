cmake_minimum_required(VERSION 3.0.0)
project(CitricSheepChallenge VERSION 0.1.0 LANGUAGES C CXX)

enable_testing()

add_executable(CitricSheepChallenge src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(ARCHIVE_OUTPUT_DIRECTORY output)
include(CPack)
