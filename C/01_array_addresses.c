
#include <stdio.h>

int main(void)
{
    int Arr[4] = {10, 20, 30, 40};

    printf("Arr      = %p\n", (void *)Arr);
    printf("&Arr     = %p\n", (void *)&Arr);
    printf("&Arr + 1 = %p\n", (void *)(&Arr + 1));

    return 0;
}
