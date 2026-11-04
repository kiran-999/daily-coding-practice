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
    struct demo dobj;

    dobj.i=11;
    dobj.f=3.14f;
    dobj.d=9.9876;

    printf("%d\n", dobj.i);
    printf("%f\n", dobj.f);
    printf("%lf\n", dobj.d);

    return 0;

}