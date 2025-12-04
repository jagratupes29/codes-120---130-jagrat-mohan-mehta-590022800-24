#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n;

    fp = fopen("students.txt", "w");

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("Stored Records:\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
