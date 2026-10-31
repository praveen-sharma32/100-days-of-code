#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int val, count = 0;
    long long sum = 0;

    while (fscanf(fp, "%d", &val) == 1)
    {
        sum += val;
        count++;
    }

    fclose(fp);

    if (count > 0)
    {
        printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    }
    else
    {
        printf("Sum = 0\nAverage = 0.00\n");
    }
    return 0;
}
