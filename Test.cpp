#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"

#include <stdio.h>
#include "assert.h"
#include "string.h"
#include "MonitoringCharge.h"

TEST_CASE("Infers the output range for the given set of inputs")
{
  int InputCurrentRange[] = {2,3,3,4,5};
  char* ComputedRange;
  int result;
  int NumberofCurrentSamples = (sizeof(InputCurrentRange))/(sizeof(InputCurrentRange[0]));
  ComputedRange = CalculateCurrentRanges(InputCurrentRange,NumberofCurrentSamples);
  result = strcmp(ComputedRange, "2-5,5");
  REQUIRE(result == 0);
}

TEST_CASE("Find the lower out of the array")
{
  int InputCurrentRange[] = {15,6,7,8,9};
  int NoofValues = (sizeof(InputCurrentRange))/(sizeof(InputCurrentRange[0]));
  int LowValue = findLowerLimit(InputCurrentRange,NoofValues);
  REQUIRE(LowValue == 6);
}

TEST_CASE("Find the higher out of the array")
{
  int InputCurrentRange[] = {15,26,19,99,9};
  int NoofValues = (sizeof(InputCurrentRange))/(sizeof(InputCurrentRange[0]));
  int HighValue = findUpperLimit(InputCurrentRange,NoofValues);
  REQUIRE(HighValue == 99);
}

TEST_CASE("Verify A2D converter")
{
  int InputAnalogCurrentValue[] = {1504,4095,4092};
  int sizeofInput = sizeof(InputAnalogCurrentValue)/sizeof(InputAnalogCurrentValue[0]);
  float* OutputCurrentValue = funcA2DConverter(InputAnalogCurrentValue,sizeofInput);
  assert(OutputCurrentValue[0] == 3.67);
  assert(OutputCurrentValue[1] == InvalidCurrentValue);
  assert(OutputCurrentValue[2] == 9.99);
}

