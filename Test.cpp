#inlcude <stdio.h>
#include "MonitoringCharge.h"

TEST_CASE("Infers the output range for the given set of inputs")
{
  int InputCurrentRange[] = {2,3,3,4,5};
  int ComputedRange,result;
  int NumberofCurrentSamples = sizeof(InputCurrentRange)/sizeof(InputCurrentRange[0]);
  ComputedRange = CalculateCurrentRanges(InputCurrentRange,NumberofCurrentSamples);
  result = strcmp(ComputedRange, "2-5,5");
  assert(result == 0);
}
