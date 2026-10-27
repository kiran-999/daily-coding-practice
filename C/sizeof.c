#include<stdio.h>
int main()
{
    char ch='A';
    int no =20;
    float f=10.5;
    double d= 20.12121;

    printf("%d\n", sizeof(ch));
    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    return 0;

}