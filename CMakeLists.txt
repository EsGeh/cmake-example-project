cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME ExampleProgram)
set(EXE_NAME ${PROJECT_NAME})

# set the project name and version
project(${PROJECT_NAME} VERSION 1.0)

set(CMAKE_DEBUG_POSTFIX d)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# include cmake files:
include(CTest)
include(FetchContent)

add_subdirectory(app)
add_subdirectory(tests)

# copy "compile_commands.json" -> ./
add_custom_target(copy_compile_cmds_json
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/compile_commands.json ${PROJECT_SOURCE_DIR}/compile_commands.json
)
