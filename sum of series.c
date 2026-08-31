#include <stdio.h>

int main(void)
{
    int n, i;
    float sum = 1, numerator, denominator;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        numerator = 2 * i - 1;
        denominator = 2 * i;

        sum = sum + numerator / denominator;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
