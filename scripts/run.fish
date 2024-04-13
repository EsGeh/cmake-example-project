#!/usr/bin/env fish

set BASE_DIR (dirname (status dirname))

set BUILD_DIR "$BASE_DIR/build"
set EXE_DIR $BUILD_DIR/app
set EXE_NAME ExampleProgram

echo "BASE_DIR: '$BASE_DIR'"
echo "BUILD_DIR: '$BUILD_DIR'"

$EXE_DIR/$EXE_NAME $argv
