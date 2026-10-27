/* This is a simple C program to demonstrate the use of address operator */

#include<stdio.h>
int main()
{
    int no=21;
    
    printf("%d\n", no);
    printf("%d\n", &no);
    printf("%d\n", sizeof(no));

    return 0;

}