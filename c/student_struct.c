/*
Name        :Pawan Daware
Date        :28/07/2026 06:16:56 PM
Description : A C program that defines a custom structure named Student.

Status      : 
*/
#include<stdio.h>
struct student
{
    int roll_no;
    char name[50];
    float marks;

};

int main()
{
    struct student s1;
    
    printf("Enter Roll No:");
    scanf("%d",&s1.roll_no);
    getchar();

    printf("Enter Name:");
    scanf("%[^\n]",s1.name);

    printf("Enter Marks:");
    scanf("%f",&s1.marks);


    printf("The details you entered for student is:\nRoll no=%d\nName=%s\nMarks=%f\n",s1.roll_no,s1.name,s1.marks);

}
