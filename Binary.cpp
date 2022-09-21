#include <stdio.h>
#include <stdlib.h>

//using namespace std;

int binary_search(int* values, int target, int length)
{
    //printf("\nlength %d \n", length);
    int min = 0;
    int max = length - 1;

    while (min <= max)
    {
        int mid = (min + max) / 2;
        //printf("\n mid = %d", mid);
        if (target < values[mid])
        {
            max = mid - 1;
        }
        else if (target > values[mid])
        {
            mid = mid + 1;
        }
        else return mid;
    }
    return -1;
}