#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long maxSoFar = arr[0];
    long long currMax = arr[0];

    for (i = 1; i < n; i++)
    {
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
        if (currMax > maxSoFar)
        {
            maxSoFar = currMax;
        }
    }

    printf("%lld\n", maxSoFar);
    return 0;
}
