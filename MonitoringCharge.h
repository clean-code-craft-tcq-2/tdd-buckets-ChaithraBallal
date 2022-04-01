#include <stdio.h>

#define MaxcurrentValue      4094
#define InvalidCurrentValue  0 /*Assumption made for an invalid current value and mentioned in the md file as well*/
extern char* CalculateCurrentRanges( int InputCurrentRange[], int NumberofCurrentSamples);
extern int findUpperLimit(int currentRange[], int NoofCurrentValues);
extern int findLowerLimit(int currentRange[], int NoofCurrentValues);
extern int* funcA2DConverter(int InputAnalogCurrentValue[], int sizeofInput);
