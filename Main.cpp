using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include "Search.h"

int main()
{
    int target = 15;
    int a[] = { 1, 4, 7, 9, 13, 15, 17, 19 };
    int length = sizeof(a) / sizeof(int);
    
    int t = line_search(a, target, length);
    printf("\n position %d", t);

    t = search_with_barier(a, length, target);
    printf("\n position %d", t);

    t = search_with_barier2(a, length, target);
    printf("\n position %d", t);

    //t = binary_search(a, target, length);
    //printf("\n mid = %d\n", t);
    
    return 0;
}