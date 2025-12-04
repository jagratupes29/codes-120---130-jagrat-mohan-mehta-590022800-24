#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char ch;

    if (in == NULL) {
        printf("input.txt not found!");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion done!");
    return 0;
}
