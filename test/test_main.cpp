#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../MathOps.h"

TEST_CASE("test factorial"){
  auto mops = MathOps();
  CHECK(mops.fact(0) == 1);
  CHECK(mops.fact(2) == 2);
  CHECK(mops.fact(3) == 6);
  CHECK(mops.fact(10) == 3628800);
}
