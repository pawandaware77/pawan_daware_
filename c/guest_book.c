/*
Name        :Pawan Daware
Date        :29/07/2026 07:47:19 PM
Description : Write a program that takes input from the user, saves it to a file, and then reads the whole file back to the terminal.

Requirements:

Open a file called guests.txt in write mode ("w").

Use a for loop that runs exactly 3 times. Inside the loop, ask the user to enter a name (using scanf), and write that name into the file using fprintf. (Don't forget to add a newline \n in your fprintf so they don't all squish together!)

Close the file.

Reopen guests.txt in read mode ("r").

Use a while loop with fgets to read every line in the file and print it to the terminal.

Close the file one last time.

Status      : 
*/
#include<stdio.h>
int main()
{
    FILE *fptr = fopen("guest.txt","w");
    if(fptr==NULL)
    {
	printf("Failed to open file in write mode!!");
	return 1;
    }

    printf("Enter 3 names\n");

   for(int i=0; i<3; i++)
   {
       char name[50];
       scanf("%[^\n]",name);

       fprintf(fptr, "%s\n", name);
       getchar();
   }

   fclose(fptr);

   fptr = fopen("guest.txt","r");
   char buffer[50];
   printf("\n-----------------------------------------------\nYou entered name's are\n-----------------------------------------------\n");
   while(fgets(buffer, sizeof(buffer), fptr))
   {
       printf("%s",buffer);
   }
   fclose(fptr);
}
