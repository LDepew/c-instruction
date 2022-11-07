#include <stdio.h>
#include "cs50.h"
#include <windows.h>
#include <string.h>
#include <ctype.h>


int main (void)

{
    printf("Welcome to the Lunar Bank\n");
    printf("\n");

    FILE *file = fopen("users.txt", "r+");
    if (!file)
    {
        file = fopen("users.txt", "w");
    }
    string user1 = "Bob";
    double user1Balance = 1000.00;
    string user2 = "Susan";
    double user2Balance = 1000.00;
    double balance;

    int choice;
    int exit = 5;

    do{
    string account = get_string("Please select an account:\n");

    /*for(int i = 0, n = strlen(account); i < n; i++)
    {
        account[i] = tolower(account[i]);
    }*/

    if (strcmp(account, user1) == 0)
    {
        balance = user1Balance;
    }
    else if (strcmp(account, user2) == 0)
    {
        balance = user2Balance;
    }

    do{
    printf("1: Check balance\n");
    printf("2: Deposit money\n");
    printf("3: Withdraw money\n");
    printf("4: Loan calculator\n");
    printf("5: Logout\n");
    printf("6: exit\n");
    printf("Select an option: ");

    choice = get_int("");
    switch(choice)
    {
    case 1:
        printf("amount is %.2f\n", balance);
        printf("\n");
        Sleep(1500);
        break;
    case 2:
        double deposit = get_double("Enter amount of deposit: ");
        balance = balance + deposit;
        printf("%.2f has been added to your account\n", deposit);
        printf("%.2f is your new balance\n", balance);
        printf("\n");
        Sleep(1500);
        break;
    case 3:
        double withdraw = get_double("Enter amount of withdraw: ");
        balance = balance - withdraw;
        printf("%.2f has been removed from your account\n", withdraw);
        printf("%.2f is your new balance\n", balance);
        printf("\n");
        Sleep(1500);
        break;
    case 4:
        int loanAmt = get_int("Enter amount of loan: ");
        int term = get_int("Enter term of loan: ");
        double APR = get_double("Enter loan APR: ");

        //printf("Monthly payment: %.2f\n", monthlyPay);
        //printf("Total interest on loan: %.2f\n", intAmount);
        //printf("Full loan amount with interest: %.2f\n", fullAmount);
        //printf("APR: %.4f\n", interestRate);
        Sleep(1500);
        break;
    case 6:
        printf("Thank you, come again");
        printf("\n");
        return 0;
        break;
    }
    }
    while(choice != 5);

    if (strcmp(account, user1) == 0)
    {
        user1Balance = balance;
    }
    else if (strcmp(account, user2) == 0)
    {
        user2Balance = balance;
    }

    char str[100];
    sprintf(str, "%f", user1Balance);
    char str2[100];
    sprintf(str2, "%f", user2Balance);

    fprintf(file, "user 1: %s\n", user1);
    fprintf(file, "user 1 balance: %s\n", str);
    fprintf(file, "user 2: %s\n", user2);
    fprintf(file, "user 2 balance: %s\n", str2);

    printf("Written Successfull?");

    fclose(file);

    }
    while(choice != 6);
}

/*int loancalc (int loanAmt, int term, int APR)
{
    return 1
    
}*/
