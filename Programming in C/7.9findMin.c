//Function to find the minimum value in an arry
//7.10 is a rewrite to include 

#include <stdio.h>

int minimum (int values[], int numberOfElements)
{
    int minValue, i;

    minValue = values[0];

    for(i = 1; i < numberOfElements; i++)
        if(values[i] < minValue)
            minValue = values[i];

    return minValue;
}

int main (void)
{
    int array1[5] = {157, -28, -37, 26, 10};
    int array2[7] = {12, 45, 1, 10, 5, 3, 22};
    int minimum (int values[10], int numberOfElements);

    printf("array1 minimum: %i\n", minimum (array1, 5));
    printf("array2 minimum: %i\n", minimum (array2, 7));
    
    return 0;
}