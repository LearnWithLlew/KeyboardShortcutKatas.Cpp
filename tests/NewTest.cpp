#include "ApprovalTests.hpp"
#include "Catch.hpp"
#include "../code/Inline.h"
TEST_CASE("Inline")
{
  Inline i;
  REQUIRE( i.Practice() == 42);
}

