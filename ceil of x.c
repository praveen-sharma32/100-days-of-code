#include <stdio.h>

int main(void)
{
    int n, x, i, ans = -1;

    printf("Enter number of elements: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter sorted elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: \n");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}
