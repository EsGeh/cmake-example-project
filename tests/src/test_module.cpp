#include <catch2/catch_all.hpp>
#include <module.h>

TEST_CASE( "test 'function' with ints", "[main]" ) {
	double res = GENERATE( range(0, 100) );
	const auto sqr = res * res;
	REQUIRE_THAT( function( sqr ), Catch::Matchers::WithinAbs( res, 0.001) );
}

