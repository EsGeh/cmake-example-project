
# add the executable
add_executable(${EXE_NAME}
	main.cpp
	src/module.cpp
	include/module.h
)

target_include_directories(${EXE_NAME} PRIVATE include)

set_target_properties(${EXE_NAME} PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

