/*
Name        :Pawan Daware
Date        :26/07/2026
Description : A C program that declares and initializes a string (for example: char str[] = "Programming";). Use a loop to iterate through the character array and count the number of characters until you reach the null terminator ('\0'). Finally, print the calculated length to the terminal. Note: Do not use the built-in strlen() function for this exercise!

Status      : 
*/
#include<stdio.h>
int main()
{
    char str[] = "Programming";

    int count =0;
    for(int i=0; str[i]!='\0'; i++)
    {
	count++;
    }

    printf("Length of the string is: %d\n",count);
}
