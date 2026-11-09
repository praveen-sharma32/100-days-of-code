#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN,
    TOTAL_COLORS
};

int main(void)
{
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < TOTAL_COLORS; i++)
    {
        printf("%s=%d\n", colorNames[i], i);
    }
    return 0;
}
