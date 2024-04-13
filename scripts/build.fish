#!/usr/bin/env fish

set BASE_DIR (dirname (status dirname))

set BUILD_DIR "$BASE_DIR/build"

echo "BASE_DIR: '$BASE_DIR'"
echo "BUILD_DIR: '$BUILD_DIR'"

cd $BASE_DIR
and begin
	cmake -B $BUILD_DIR -S .
	and cmake --build $BUILD_DIR
	and cmake --build $BUILD_DIR --target copy_compile_cmds_json
end
