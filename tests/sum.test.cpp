// Copyright (c) 2020 Emmanuel Arias
#include <catch.hpp>
#include "sum.h"

TEST_CASE( "Sums are computed", "[sum]" ) {
    REQUIRE( sum(1, 1) == 2 );
}
