/*
Name        :Pawan Daware
Date        :26/07/2026
Description : A C program that declares an integer variable (e.g., int num = 42;) and a pointer variable pointing to it (e.g., int *ptr = &num;). Print three things:

The value of num directly.

The memory address of num using the address-of operator (&).

The value of num accessed indirectly using the dereference operator on the pointer (*ptr).

Status      : 
*/
#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a value:");
    scanf("%d",&num);

    int *ptr =&num;

    printf("Number you entered is: %d\n",num);
    
    printf("memory address of num using the address-of operator: %p\n",&num);
    
    printf("value of num accessed indirectly using the dereference operator on the pointer: %d\n",(*ptr));

}
