/*
Name        :Pawan Daware
Date        :28/07/2026 06:58:05 PM
Description : A C program that asks the user for a specific number of integers they want to store (e.g., "How many numbers?"). Use malloc to dynamically allocate memory for an integer array of that exact size.

Status      : 
*/
#include<stdio.h>
#include<stdlib.h>
void print(int arr[], int size)
{
    printf("The Elements you entered are:");
    for(int i=0;i<size;i++)
    {
	printf(" %d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int size;

    printf("Enter the size of array:");
    scanf("%d",&size);

    int *arr = malloc(size*sizeof(int));

    printf("Enter %d array elements:",size);
    for(int i=0; i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    getchar();

    print(arr,size);

    printf("If you want to Modify the array size then please use (y/n):");
    char ch;
    scanf("%c",&ch);
    if(ch== 'y' )
    {
	int new_size;
	printf("Please Enter the new Size:");
	scanf("%d",&new_size);
        getchar();

	arr = realloc(arr,new_size*sizeof(int));
	if(size < new_size)
	{
	    printf("Please Enter the New additional %d Elements:",(new_size - size));
	    for(int i=size; i<new_size;i++)
	    {
		scanf("%d",&arr[i]);
	    }

	    print(arr,new_size);
	}
    }
    else
    {
	printf("Thankyou!! Have a Good Day\n");
    }

    free(arr);
    printf("\n");
}
