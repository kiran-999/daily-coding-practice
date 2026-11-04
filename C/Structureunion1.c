#include<stdio.h>

#pragma pack(1)
struct demo
{
    /* data */
    int i;
    float f;
    double d;
};

int main()

{
    printf("%d\n", sizeof(struct demo));

    return 0;
    
}