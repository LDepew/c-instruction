#include <stdio.h>

int main(void)
{
    int n[7] = {0, 2, 4, 5, 6, 7, 8};

    if no doors
    return false
    if number behind doors[middle]
    return true
    else if number < doors[middle]
    search doors[0] through doors[middle - 1]
    else if number > doors[middle]
    search doors[middle + 1] through doors[n - 1]
}