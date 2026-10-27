#include<stdio.h>

struct demo
{
    int f;
    char ch;
    double d;
};

int main()
{
    printf("%d\n", sizeof(struct demo));

    return 0;
}