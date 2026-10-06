#include <stdio.h>

int main(void)
{
    int n, x, found = -1;

    printf("Enter positive integer n: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long totalSum = (long long)n * (n + 1) / 2;

    for (x = 1; x <= n; x++)
    {
        long long leftSum = (long long)x * (x + 1) / 2;
        long long rightSum = totalSum - (long long)(x - 1) * x / 2;
        if (leftSum == rightSum)
        {
            found = x;
            break;
        }
    }

    printf("%d\n", found);
    return 0;
}
