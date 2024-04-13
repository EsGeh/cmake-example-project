#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include <module.h>

TEST_CASE( "test 'function'", "[main]" ) {
	double arg = 9;
	REQUIRE_THAT( function( arg ), Catch::Matchers::WithinAbs( 3, 0.001) );
}

