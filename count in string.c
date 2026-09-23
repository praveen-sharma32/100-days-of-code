#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
