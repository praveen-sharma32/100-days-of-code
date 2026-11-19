#include <stdio.h>

enum StatusCheck {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void)
{
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
