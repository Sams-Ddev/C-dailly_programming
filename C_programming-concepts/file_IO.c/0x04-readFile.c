#include <stdio.h>
/**
 * use functions like fgetc() or fgets()
 * to read data from a file.
 */

int main() {
    FILE *file = fopen("example.txt", "r");
    
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return (1);
    }
    
    char buffer[100];
    
    /*while (fgets(buffer, sizeof(buffer), file) != NULL) { ... }:
     * This while loop reads lines from the file using the fgets() function.
     * It reads up to sizeof(buffer) characters from the
     * file into the buffer and continues as long as fgets() doesn't return NULL,
     * which would indicate the end of the file or an error.
     *
     */

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    
    return 0;
}

