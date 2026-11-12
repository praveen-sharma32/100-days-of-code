#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s;
    printf("Enter Name, Roll No, Marks: \n");
    if (scanf("%49s %d %d", s.name, &s.roll_no, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    }
    return 0;
}
