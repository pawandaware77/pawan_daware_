/*
A C program that demonstrates the use of preprocessor directives by defining a constant macro for PI, a macro function to calculate the square of a number, and a macro function to find the maximum of two values.

Requirements:

Use #define at the top of your file to create a constant for PI (3.14159).

Use #define to create a macro function that takes one argument and returns its square.

Use #define to create a macro function that takes two arguments and returns the larger of the two.

Inside main(), ask the user to input a radius (float). Calculate the area of a circle using your PI macro and your Square macro, then print the result.

Ask the user for two integers, use your Max macro to figure out which is larger, and print the result.
 
*/
#include<stdio.h>

#define PI 3.14159
#define sq(num) ((num)*(num))
#define comp(num1,num2) ((num1>num2)?num1:num2)
int main()
{ 
        float radius;
	printf("Enter the Radius of circle to know its area :");
	scanf("%f",&radius);

	printf("The Area of circle is %f\n\n",(PI*(sq(radius))));
	int num;
	printf("Enter a number to know is Square :");
	scanf("%d",&num);

	printf("Square for %d is %d\n\n",num,sq(num));
	
	int n1,n2;
	printf("Enter 2 numbers to know the larger of the two :");
	scanf("%d %d",&n1,&n2);

	printf("Largest of %d and %d is %d\n\n",n1,n2,comp(n1,n2));


}
