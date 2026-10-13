#include <stdio.h>

int main(void)
{
    int n, k, i, j;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: \n");
    scanf("%d", &k);

    if (k > n || k <= 0) return 0;

    for (i = 0; i <= n - k; i++)
    {
        int firstNeg = 0;
        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d%s", firstNeg, (i == n - k) ? "\n" : " ");
    }
    return 0;
}
