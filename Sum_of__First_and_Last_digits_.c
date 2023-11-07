#include<stdio.h>
int main()
{
    int N,q,r,sum=0;
    scanf("%d",&N);
    r=N%10;
    while(N>10)
    {
         N=N/10;
    }
    q=N;
    sum=q+r;
    printf("%d",sum);
}