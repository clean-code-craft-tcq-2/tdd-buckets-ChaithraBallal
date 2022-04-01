#include <stdio.h>
#include "string.h"
#include "MonitoringCharge.h"

int findLowerLimit(int currentRange[], int NoofCurrentValues)
{
  int lowerLimit = currentRange[0];
  int range;
  for(range=1; range<NoofCurrentValues; range++)
  {
    if (lowerLimit > currentRange[range])
    {
      lowerLimit = currentRange[range];
    }
  }
  return lowerLimit;
}

int findUpperLimit(int currentRange[], int NoofCurrentValues)
{
  int upperLimit = currentRange[0];
  int range;
  for(range=1; range<NoofCurrentValues; range++)
  {
    if (upperLimit < currentRange[range])
    {
       upperLimit = currentRange[range];
    }
  }
  return upperLimit;
}

char* CalculateCurrentRanges( int InputCurrentRange[], int NumberofCurrentSamples)
{
  char outputString[50];
  char* outputBuffer = outputString;
  int lowCurrentValue = findLowerLimit(InputCurrentRange,NumberofCurrentSamples);
  int highCurrentValue = findUpperLimit(InputCurrentRange,NumberofCurrentSamples);
  sprintf(outputBuffer, "%d-%d,%d",lowCurrentValue,highCurrentValue,NumberofCurrentSamples);
  return outputBuffer;  
}

int* funcA2DConverter(int InputAnalogCurrentValue[],int sizeofInput)
{
  /*Assumption made -> the readings start from 0*/
  int OutCurrent[sizeofInput];
  int i;
  for(i = 0; i < sizeofInput; i++)
  {
    if(InputAnalogCurrentValue[i] <= MaxcurrentValue) 
    {
      OutCurrent[i] = (InputAnalogCurrentValue[i]*10)/MaxcurrentValue;     
    }
    else
    {
      OutCurrent[i] = InvalidCurrentValue;
    }
  }
  return OutCurrent;
}
