/*
Name        :Pawan Daware
Date        :29/07/2026 06:49:44 PM
Description : A C program that demonstrates how to write data to a file and read it back. Up until now, your data disappears as soon as the program ends. File handling allows you to save data permanently to your hard drive.
Declare a file pointer (FILE *).

Open a new text file named data.txt in write mode ("w").

Write a sentence of your choice (e.g., "Learning C is awesome!") into the file using a function like fprintf or fputs.

Safely close the file using fclose().

Reopen the exact same data.txt file, but this time in read mode ("r").

Read the sentence back out of the file using a function like fgets and print it directly to your terminal.

Close the file one last time.
Status      : 
*/

#if 0
#include<stdio.h>
int main()
{
    FILE *fptr = fopen("data.txt","w");
    if(fptr == NULL)
    {
	printf("fopen got Failed!!");
	return 1;
    }
    fprintf(fptr,"Learning C in awesome!\n");
    fprintf(fptr, "Now my data is saved to the hard drive.\n");
    fclose(fptr);
    
    fptr = fopen("data.txt","r");

    char buff[100];
    while(fgets(buff, sizeof(buff), fptr)!=NULL)
    {
    	printf("%s", buff);
    }


    
    fclose(fptr);
  
}
#endif

#if 1
//AI's code

#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "data.txt";

    // ==========================================
    // 1. WRITING TO THE FILE
    // ==========================================

    // Open in "w" (write) mode. This creates the file if it doesn't exist,
    // or wipes it completely clean if it does exist.
    fptr = fopen(filename, "w");

    // Safety Check: Did the OS actually let us open the file?
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1; // Exit with an error code
    }

    // Write a few lines of text
    fprintf(fptr, "Learning C is awesome!\n");
    fprintf(fptr, "Now my data is saved to the hard drive.\n");

    // Always close the file when done to free up system resources
    fclose(fptr);
    printf("Successfully wrote to %s\n\n", filename);


    // ==========================================
    // 2. READING FROM THE FILE
    // ==========================================

    // Open in "r" (read) mode. The file MUST exist, or this will fail.
    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("Reading data back from the file:\n");
    printf("--------------------------------\n");

    // Create a temporary storage buffer
    char buffer[100];

    // fgets() reads one line at a time.
    // It returns NULL when there is no more data left to read (End of File).
    // The while loop allows us to print every line, no matter how long the file is.
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    printf("--------------------------------\n");

    // Close the file one last time
    fclose(fptr);

    return 0;
}
#endif
