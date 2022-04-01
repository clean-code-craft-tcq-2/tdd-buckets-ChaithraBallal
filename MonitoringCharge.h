#include <stdio.h>

#define MaxcurrentValue      4094u
#define MincurrentValue      0u
#define InvalidCurrentValue  4095u /*Assumption made for an invalid current value and mentioned in the md file as well*/
extern char* CalculateCurrentRanges( int InputCurrentRange[], int NumberofCurrentSamples);
extern int findUpperLimit(int currentRange[], int NoofCurrentValues);
extern int findLowerLimit(int currentRange[], int NoofCurrentValues);
extern int* funcA2DConverter(int InputAnalogCurrentValue[]), int sizeofInput);
