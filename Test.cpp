#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"

#include <stdio.h>
#include "string.h"
#include "MonitoringCharge.h"

TEST_CASE("Infers the output range for the given set of inputs")
{
  int InputCurrentRange[] = {2,3,3,4,5};
  char* ComputedRange;
  int result;
  int NumberofCurrentSamples = (sizeof(InputCurrentRange))/(sizeof(InputCurrentRange[0]));
  ComputedRange = CalculateCurrentRanges(InputCurrentRange[],NumberofCurrentSamples);
  result = strcmp(ComputedRange, "2-5,5");
  REQUIRE(result == 0);
}
