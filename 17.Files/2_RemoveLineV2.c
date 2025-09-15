#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char filename[100], c;
    int line, current_line = 1;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp1 = fopen(filename, "r");
    if (fp1 == NULL) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    printf("Enter the line number to remove: ");
    scanf("%d", &line);

    // Temporary file
    fp2 = fopen("temp.txt", "w");
    if (fp2 == NULL) {
        printf("Cannot create temporary file\n");
        fclose(fp1);
        return 1;
    }

    // Copy content except the given line
    while ((c = fgetc(fp1)) != EOF) {
        if (c == '\n')
            current_line++;

        if (current_line != line)
            fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    // Replace original file with modified file
    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d removed successfully.\n", line);

    return 0;
}
