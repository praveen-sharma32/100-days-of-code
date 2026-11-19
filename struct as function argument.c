#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void displayStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main(void)
{
    struct Student s;
    printf("Enter student details (Name Roll Marks): \n");
    if (scanf("%49s %d %d", s.name, &s.roll, &s.marks) == 3)
    {
        displayStudent(s);
    }
    return 0;
}
