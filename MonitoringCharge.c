#include <stdio.h>
#include "string.h"
#include "MonitoringCharge.h"

int findLowerLimit(int* currentRange, int NoofCurrentValues)
{
  int lowerLimit = currentRange[0];
  for(i=1; i<NoofCurrentValues; i++)
  {
    if (lowerLimit < currentRange[i])
    {
      lowerLimit = currentRange[i];
    }
  }
  return lowerLimit;
}

int findUpperLimit(int* currentRange, int NoofCurrentValues)
{
  int upperLimit = currentRange[0];
  for(i=1; i<NoofCurrentValues; i++)
  {
    if (upperLimit > currentRange[i])
    {
       upperLimit = currentRange[i];
    }
  }
  return upperLimit;
}

char CalculateCurrentRanges( int* InputCurrentRange, int NumberofCurrentSamples)
{
  char outputBuffer;
  int lowCurrentValue = findLowerLimit(InputCurrentRange,NumberofCurrentSamples);
  int highCurrentValue = findUpperLimit(InputCurrentRange,NumberofCurrentSamples);
  sprintf(outputBuffer, "%d-%d,%d",lowCurrentValue,highCurrentValue,NumberofCurrentSamples);
  return outputBuffer;  
}
