#include<stdio.h>
int main()
{
    int i,N,sum=0;
    scanf("%d",&N);
    for (i=1;i<N;i++)
    {
        if (N%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==N)
    {
        printf("PERFECT");
    }
    else if (sum<N)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}
