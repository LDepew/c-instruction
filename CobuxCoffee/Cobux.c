#include <stdio.h>
#include "cs50.h"

int main(void)
{
    printf("Welcome to Cobux Coffee\n");
    int choice;

    do
    {
    printf("Please select an option:\n");

    printf("1: black coffee\n");
    printf("2: Iced coffee\n");
    printf("3: Mocha Latte\n");
    printf("4: Hazelnut Espresso\n");
    printf("5: Chocolate Frappe");
    printf("6: Fruit Fresher drink\n");
    printf("7: Water");

    int time[7] = {2, 3, 5, 5, 7, 3, 0};
    double cost[7] = {1.50, 2.50, 3.25, 4.75, 5.25, 3.25, 1.00};
    choice = get_int("\n");

    switch(choice)
    {
        case 1:
        printf("Your drink will take %i minutes.\n", time[0]);
        printf("Your total is %.2f.\n", cost[0]);
        printf("Thank you.\n");
        break;
        case 2:
        printf("Your drink will take %i minutes.\n", time[1]);
        printf("Your total is %.2f.\n", cost[1]);
        printf("Thank you.\n");
        break;
        case 3:
        printf("Your drink will take %i minutes.\n", time[2]);
        printf("Your total is %.2f.\n", cost[2]);
        printf("Thank you.\n");
        break;
        case 4:
        printf("Your drink will take %i minutes.\n", time[3]);
        printf("Your total is %.2f.\n", cost[3]);
        printf("Thank you.\n");
        break;
        case 5:
        printf("Your drink will take %i minutes.\n", time[4]);
        printf("Your total is %.2f.\n", cost[4]);
        printf("Thank you.\n");
        break;
        case 6:
        printf("Your drink will take %i minutes.\n", time[5]);
        printf("Your total is %.2f.\n", cost[5]);
        printf("Thank you.\n");
        break;
        case 7:
        printf("Your drink will take %i minutes.\n", time[6]);
        printf("Your total is %.2f.\n", cost[6]);
        printf("Thank you.\n");
        break;
    }
    }
    while (choice < 0 || choice > 8);
}