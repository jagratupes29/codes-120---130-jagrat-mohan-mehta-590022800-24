#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    printf("Sum = %d\nAverage = %.2f", sum, (float)sum / count);

    fclose(fp);
    return 0;
}
