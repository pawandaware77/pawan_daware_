/*
 Description: Write a program that takes an integer from the user and performs two classic bitwise tricks on it: checking if it is even/odd without using modulo (%), and multiplying it by 2 without using multiplication (*).
*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);

	if((num & 1) ==0)
	{
		printf("Even number\n");
		printf("Multiplicaton of %d by 2 is: %d\n", num, (num<<1));
		return 0;
	}
	else
	{
		printf("Odd number\n");
		printf("Multiplicaton of %d by 2 is: %d\n", num, (num<<1));
		return 0;
	}
}
