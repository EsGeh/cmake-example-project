
# Testing library
FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.13.6)
FetchContent_MakeAvailable(catch)
# Adds Catch2::Catch2

#########################
# ADD TEST test_module
#########################

add_executable(test_module
	src/test_module.cpp
	include/test_module.h
	${PROJECT_SOURCE_DIR}/app/src/module.cpp
)

target_link_libraries(test_module PRIVATE Catch2::Catch2)

add_test(test_module test_module)
target_include_directories(test_module PRIVATE include)
target_include_directories(test_module PRIVATE ${PROJECT_SOURCE_DIR}/app/include)
