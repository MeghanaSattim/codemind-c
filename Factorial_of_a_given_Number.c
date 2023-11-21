#include<stdio.h>
int main()
{
    int i,n,dp=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        dp=dp*i;
    }
    printf("%d ",dp);
}