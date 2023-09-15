// A variety of helper and utility functions.

/*
    Compares val1 to val2, case-insensitive, and returns true if the two arguments are the same. Returns false otherwise.

    Val1 - Character to check
    Val2 - Character, typically 'Y' or 'N'.
*/
int charcmp(char val1, char val2)
{
    char val2_norm = val2;

    // Convert uppercase to lowercase.
    if (val2 > 64 && val2 < 94)
    {
        val2_norm = val2 + 32;
    }

    // Limit characters to alphabetic characters. a through z
    if (val2_norm > 96 && val2_norm < 123)
    {
        if (val1 == val2_norm)
        {
            return 1;
        }
    }
    
    return 0;
    
}