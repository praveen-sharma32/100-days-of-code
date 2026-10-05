#include <stdio.h>

int main(void)
{
    int n, i, totalSum = 0, leftSum = 0, pivot = -1;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivot);
    return 0;
}
