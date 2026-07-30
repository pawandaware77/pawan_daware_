/*
 Description: Write a program that expects the user to pass their first and last name as command-line arguments when they run the program.

Requirements:

Update your main function signature to accept argc and argv.

Write an if statement to check if the user provided exactly 3 arguments (./a.out, FirstName, and LastName).

If argc is not equal to 3, print a helpful message (e.g., "Usage: ./a.out <FirstName> <LastName>\n") and return 1; to exit early.

If they did provide the right number of arguments, print a greeting like "Hello, [FirstName] [LastName]! Welcome to Command Line Arguments." by accessing the argv array.
 
 */

#include<stdio.h>
int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Usage: ./a.out <FirstName> <LastName>\n");
		return 1;
	}
	else
	{
		printf("Hello, %s %s! Welcome to Command Line Arguments.\n", argv[1], argv[2]);
		return 0;
	}
}
