/*
Name        :Pawan Daware
Date        :26/07/2026
Description : A C program that defines a custom function named multiply which takes two integer variables as parameters and returns their calculated product. Inside the main() function, call this multiply function using two numbers of your choice and print the returned result to the terminal.

Status      : 
*/
#include<stdio.h>
int mul(int num1, int num2)
{
    return (num1*num2);
}
int main()
{
    int num1, num2;

    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);

    int res = mul(num1,num2);

    printf("Multiplication for two given number is: %d\n",res);

}
