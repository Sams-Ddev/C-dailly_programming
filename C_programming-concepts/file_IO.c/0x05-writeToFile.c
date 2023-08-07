#include <stdio.h>
/*use functions like fprintf() or fputs() to write data to a file.*/

int main() {
    FILE *file = fopen("example.txt", "w");
    
    if (file == NULL) {
        printf("Failed to create the file.\n");
        return 1;
    }
    
    fprintf(file, "Hello, world!\n");
    fputs("This is another line.\n", file);
    
    fclose(file);
    
    return 0;
}

