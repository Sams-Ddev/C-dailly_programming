#include <stdio.h>

/* This program prints its inputs one per line */
int main(void)
{
    int c;
    
    while ((c = getchar()) != EOF)
    {
        ++c;
        putchar(c);
        if (c == ' ' && c == '\n' && c == '\t')
        {
            putchar('\n');
        }
    }
    return (0);
}
