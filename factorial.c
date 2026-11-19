#include <stdio.h>
int main(void)
{
    int n,i,f=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f = f*i;
    }
    printf("Factorial is = %d\n",f);
    // return 0;
}
