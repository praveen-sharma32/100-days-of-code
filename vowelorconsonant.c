#include <stdio.h>

int main(void)
{
    char n;
    printf("enter a character\n");
    scanf("%c",& n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    {
        printf("The character is a vowel\n");
    }
    else
    {
        printf("The character is a consonant\n");
    }
   // return 0;
}
