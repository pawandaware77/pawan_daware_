/*
Description: A C program that defines a custom function named swap which takes two integer pointers as parameters. Inside this function, swap the values stored at those memory addresses. In your main() function, declare two integer variables, print their original values, call the swap function by passing their memory addresses, and then print their values again to demonstrate that they have been successfully swapped.
*/

#include<stdio.h>
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
int main()
{
	int num1, num2;
	
	printf("Enter the num1:");
	scanf("%d",&num1);
	printf("Enter the num2:");
	scanf("%d",&num2);

	
	printf("Before swap \n num1 =%d\n num2=%d\n",num1, num2);
	swap(&num1,&num2);
	printf("After swap \n num1 =%d\n num2=%d\n",num1, num2);
}
