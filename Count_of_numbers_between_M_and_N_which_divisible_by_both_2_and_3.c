#include<stdio.h>
int main()
{
    int i,M,N,count=0;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if (i%2==0&&i%3==0&&i%2==0&&i%3==0)
        count++;
    }
    printf("%d",count);
}