#include<stdio.h>
int main()
{
    int Arr[]={10,30,60,90,110};

    int *p= NULL;
    int *q= NULL;

    p= &(Arr[1]);
    q= &(Arr[3]);

    printf("%d\n", *p);
    printf("%d\n", *q);

    return 0;

}