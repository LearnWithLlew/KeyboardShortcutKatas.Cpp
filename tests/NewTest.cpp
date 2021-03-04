#include "ApprovalTests.hpp"
#include "Catch.hpp"
#include "../code/Inline.h"
#include "../code/Navigation.h"

TEST_CASE("Inline")
{
  Inline i;
  REQUIRE( i.Practice() == 42);
}

TEST_CASE("Navigation")
{
  Navigation::main();
}

