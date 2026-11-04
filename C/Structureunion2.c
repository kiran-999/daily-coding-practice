#include<stdio.h>

#pragma pack(1)
union demo
{
    /* data */
    int i;      // 4 bytes
    float f;    // 4 bytes
    double d;   // 8 bytes
};

int main()
{

    printf("%d\n", sizeof(union demo));

    return 0;
    
}