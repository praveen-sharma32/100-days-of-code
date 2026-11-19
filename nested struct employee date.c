#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main(void)
{
    struct Employee emp;
    printf("Enter Employee Name, ID, Joining Date (day month year): \n");
    if (scanf("%49s %d %d %d %d", emp.name, &emp.id, &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year) == 5)
    {
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", emp.name, emp.id, emp.joinDate.day, emp.joinDate.month, emp.joinDate.year);
    }
    return 0;
}
