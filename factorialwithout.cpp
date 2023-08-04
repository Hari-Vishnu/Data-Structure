#include <stdio.h>
int factorial(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
	printf("enter a number:");
	int num;
	scanf("%d",&num);
    printf("Factorial of %d is %d",
           num, factorial(num));
    return 0;
}
