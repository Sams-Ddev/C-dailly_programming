#include <stdio.h>

/**
 * open an existing file,
 *
 * use the fopen() function
 *  with appropriate mode ("r" for read mode,
 *  "w" for write mode, "a" for append mode, etc.).
 */

int main() {
    FILE *file = fopen("example.txt", "r");
    
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    // Perform operations on the file
    
    fclose(file);
    
    return 0;
}

