

/* Array Pointer Arithmetic*/

#include<stdio.h>
int main()
{
    int Arr[]={10,20,30,40,50};
    int *p = &(Arr[1]);
    int *q = &(Arr[2]);

    printf("%d\n",*p);
    printf("%d\n",*q);

    printf("%d\n",(q-p));
    printf("%d\n",(q-2));
    printf("%d\n",(p+2));

    return 0;

}