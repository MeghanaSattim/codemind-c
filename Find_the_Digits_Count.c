#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    while(N>0)
    {
        count++;
        N=N/10;
    }
    printf("%d",count);
}