#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    if (n==0)
    printf("Fibonacci");
    int c;
    c=a+b;
    while (c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if (c==n)
    printf("True");
    else
    printf("False");
}