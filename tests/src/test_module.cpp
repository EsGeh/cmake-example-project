#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <module.h>

TEST_CASE( "test 'function'", "[main]" ) {
	double arg = 9;
	REQUIRE( function( arg ) == Approx( 3 ) );
}

