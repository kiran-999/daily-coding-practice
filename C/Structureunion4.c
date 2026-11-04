#include<stdio.h>

#pragma pack(1)

struct demo
{
    /* data */
    int i;      // 4 bytes
    float f;    // 4 bytes
    struct hello
    {
        int no;
        float marks;
    };
};

int main()
{
    struct demo dobj;

    printf("%d\n", sizeof(struct demo));

    return 0;
}