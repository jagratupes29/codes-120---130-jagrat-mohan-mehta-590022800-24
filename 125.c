#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("Enter line to append: ");
    fgets(line, sizeof(line), stdin);
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);

    printf("Text appended successfully!");
    return 0;
}
