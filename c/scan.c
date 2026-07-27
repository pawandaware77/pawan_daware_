/*
Name        :Pawan Daware
Date        :26/07/2026
Description : The scanf function: Learn how to pause the program and wait for the user to type something in the terminal.

Status      :Done
*/

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:");

    scanf("%d %d", &num1, &num2);

    printf("The Sum is: %d\n",(num1+num2));


}
