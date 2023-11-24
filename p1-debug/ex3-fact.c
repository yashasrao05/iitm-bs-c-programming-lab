#include<stdio.h>
int n = 0;
void fact(int n)
{
    int i = 1;
    for(; i <= n; i++)
        n *= i;
}

int main()
{
    fact(5);
    printf("%d", n);
    return 0;
}

