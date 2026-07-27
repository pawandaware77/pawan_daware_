/*
Name        :Pawan Daware
Date        :26/07/2026
Description : Use if and else blocks to check if a user's age is 18 or older and print their voting eligibility.

Status      : 
*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18)
    {
	printf("You ar eeligible to vote.\n");
    }
    else
    {
	printf("You are a minor and cannot vote yet.\n");
    }
}
