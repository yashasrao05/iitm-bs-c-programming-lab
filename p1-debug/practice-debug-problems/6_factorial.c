#include<stdio.h>
int n = 0;
void fact(int num)
{
    int factorial = 1;
    for(int i = 1; i <= num; i++)
        factorial *= i;
    n = factorial;
}

int main()
{
	fact(5);
	printf("%d", n);
	return 0;
}