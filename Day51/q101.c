#include <stdio.h>

int main(void)
{
    int n, target, i;
    int first = -1, last = -1;

    printf("Enter number of elements: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter sorted elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: \n");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first == -1)
    {
        printf("-1,-1\n");
    }
    else
    {
        printf("%d,%d\n", first, last);
    }
    return 0;
}
