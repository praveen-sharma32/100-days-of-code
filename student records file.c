#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void)
{
    int n, i;
    printf("Enter number of students to store: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s;
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) return 1;

    for (i = 0; i < n; i++)
    {
        printf("Enter Name, Roll, Marks for student %d: \n", i + 1);
        scanf("%49s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    // Reading and displaying
    fp = fopen("students.txt", "r");
    if (fp == NULL) return 1;

    printf("\nStored Student Records:\n");
    while (fscanf(fp, "%49s %d %d", s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}
