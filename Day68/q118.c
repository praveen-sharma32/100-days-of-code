#include <stdio.h>

int main(void)
{
    int n, i, val;
    long long actualSum = 0;

    printf("Enter size of array (n): \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        actualSum += val;
    }

    // array has size n, elements are from 0 to n (total n+1 numbers)
    long long expectedSum = (long long)n * (n + 1) / 2;
    printf("%lld\n", expectedSum - actualSum);
    return 0;
}
