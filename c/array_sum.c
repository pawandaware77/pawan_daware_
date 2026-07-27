/*
Name        :Pawan Daware
Date        :26/07/2026
Description : A C program that declares an integer array of 5 elements (e.g., 10, 20, 30, 40, 50), uses a for loop to iterate through the array to calculate the total sum of its elements, and prints the final sum to the terminal.

Status      : 
*/
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};

    int sum = 0;

    for(int i=0;i<5;i++)
    {
	sum = sum + arr[i];
    }

    printf("Sum = %d \n",sum);
}
