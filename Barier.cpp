#include <stdio.h>
#include <stdlib.h>

int search_with_barier(int* values, int length, int target)
{
    if (length != 0)
    {
        int last = values[length - 1];
        values[length - 1] = target;
        
        int i = 0;
        for (i = 0; values[i] != target; i++)
        {
        
        }
        
        values[length - 1] = last;
        if (i != (length - 1) || target == last)
        {
            return i;
        }
    }
    return -1;
}

int search_with_barier2(int* values, int length, int target)
{
    values[length] = target;
    int i = 0;
    while (values[i] != target)
    {
        i++;
    }

    return i < length ? i : -1;
}