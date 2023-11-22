#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    int sq=n;
    n*=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if (sum==sq)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
