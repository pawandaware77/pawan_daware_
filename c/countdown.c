/*
Name        :Pawan Daware
Date        :26/07/2026
Description : A C program that uses a while loop to print the numbers from 10 down to 1 consecutively on the screen, demonstrating how to decrement a variable inside a condition-based loop.

Status      : 
*/
#include<stdio.h>
int main()
{
    for(int i=10; i>=1; i--)
    {
        printf("%d\n",i);
    }

    int k=10;
    while(k)
    {
	printf("%d\n",k);
	k--;
    }
}
