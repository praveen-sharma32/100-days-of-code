#include <stdio.h>

int main(void)
{
    int n, i;
    float sum = 0, numerator, denominator;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        numerator = 2 * i;
        denominator = 4 * i - 1;

        sum = sum + numerator / denominator;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
