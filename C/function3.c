#include<stdio.h>
int main()
{
    int value1=0, value2=0, ans=0;

    printf("enter your first number :");
    scanf("%d", &value1);
    
    printf("enter your second number :");
    scanf("%d", &value2);

    ans=value1+value2;

    printf("addition is : %d\n", ans);
    
    return 0;



}