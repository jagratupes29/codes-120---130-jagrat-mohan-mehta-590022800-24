#include <stdio.h>

int main() {
    char src[50], dest[50];
    FILE *fs, *fd;
    char ch;

    scanf("%s %s", src, dest);

    fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Source file not found!");
        return 1;
    }

    fd = fopen(dest, "w");

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully.");
    return 0;
}
