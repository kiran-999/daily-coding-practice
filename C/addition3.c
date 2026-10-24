#include<stdio.h>

int addition(int a,int b)

{
    return a+b;
}

int main()
{
    int x=10, y=20,result=0;
    result = addition(x,y);
    printf("addition is: %d\n", result);

    return 0;
    
}