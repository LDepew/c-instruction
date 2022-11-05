#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int binarySearch(arr, start, end, target);

int main(void)
{
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    printf("%i\n", binarySearch(arr, start, end, target));
}

int binarySearch(arr, start, end, target)
{ 
    int *midIndex = malloc(sizeof(int));
    midIndex = (int)floor((start + end) / 2);

    if ((int)&arr[midIndex] == target)
    {
        return true;
    }
    /*
    if ((int)&arr[midIndex] > target)
    {
        return binarySearch(arr, start, midIndex - 1, target);
    }

    else return binarySearch(arr, midIndex + 1, end, target);*/
}