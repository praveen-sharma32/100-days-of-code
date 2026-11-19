#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student arr[], int n)
{
    int topIdx = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].marks > arr[topIdx].marks)
        {
            topIdx = i;
        }
    }
    return arr[topIdx];
}

int main(void)
{
    int n, i;
    printf("Enter number of students: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = findTopper(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    return 0;
}
