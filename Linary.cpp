#include <stdio.h>
#include <stdlib.h>

int line_search(int* values, int target, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (values[i] == target) return i;
        if (values[i] > target) return -1;
    }
    return -1;
}