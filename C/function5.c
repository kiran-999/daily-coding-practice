#include<stdio.h>

int addition(int no1, int no2)
{
    int result =0;
    result = no1 +no2;
    return result;
}

int main()
{
    int value1=0, value2=0, ans=0;

    printf("enter the first number : \n");
    scanf("%d", &value1);

    printf("enter your second number : \n");
    scanf("%d", &value2);

    ans = addition(value1, value2);

    printf("addition is : %d\n", ans);

    return 0;
}