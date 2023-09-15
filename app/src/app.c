// Header imports.
#include <stdio.h>
#include <string.h>
#include "utility.h"

// Enumerations and Type definitions
typedef enum { true, false } bool;

// The main() function is the starting point of our program.
int main() 
{
    // User is asked for input to make choices.
    char file_choice; 
    printf("Would you like to create a new table file? (Y | N)\n");

    if (charcmp(file_choice, 'Y') == 1)
    {

    }
    else if (charcmp(file_choice, 'N'))
    {

    }
    
    // Based on user choice, create or open, we do 1 thing.
    if (file_choice) 
    {

    }
    return 0;
}

// Create a new table file -or- access one that already exists.
void CreateTable() 
{
    // File pointer to store data.
    FILE *table;

    // If user is creating new file

    // If user is opening an existing file.
}

