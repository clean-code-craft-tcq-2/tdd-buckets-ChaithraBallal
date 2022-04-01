#include <stdio.h>

#define MaxcurrentValue      4094

extern char* CalculateCurrentRanges( int InputCurrentRange[], int NumberofCurrentSamples);
extern int findUpperLimit(int currentRange[], int NoofCurrentValues);
extern int findLowerLimit(int currentRange[], int NoofCurrentValues);
extern int* funcA2DConverter(int InputAnalogCurrentValue[], int sizeofInput);
