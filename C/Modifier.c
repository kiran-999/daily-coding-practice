/* This is a simple C program to demonstrate the use of modifiers */

#include<stdio.h>
int main()
{
    int i=20;
    short int j=10;
    long int k=30;

    printf("%d\n", sizeof(i));
    printf("%d\n",sizeof(j));
    printf("%d\n",sizeof(k));

    return 0;
}