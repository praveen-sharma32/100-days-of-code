#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("info.txt", "r");
    char line[200];

    if (fp == NULL)
    {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
