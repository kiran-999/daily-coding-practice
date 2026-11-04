/* Structure and Union in C */


#include<stdio.h>

#pragma pack(1)
struct demo
{
    /* data */
    int i;      // 4 bytes
    float f;    // 4 bytes
    double d;   // 8 bytes
};

int main()

{
    printf("%d\n", sizeof(struct demo));

    return 0;

}