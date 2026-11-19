#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
