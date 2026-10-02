#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, j, k, len, first = 1;

    printf("Enter a string: \n");
    if (scanf("%99s", str) == 1)
    {
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            for (j = i; j < len; j++)
            {
                if (!first)
                {
                    printf(",");
                }
                for (k = i; k <= j; k++)
                {
                    putchar(str[k]);
                }
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
