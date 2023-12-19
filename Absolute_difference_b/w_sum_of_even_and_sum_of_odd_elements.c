#include<stdio.h>
#include<math.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum1=0;
    for (i=0;i<N;i++)
    {
        if (arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
    }
    int sum2=0;
    for (i=0;i<N;i++)
    {
        if (arr[i]%2!=0)
        {
            sum2=sum2+arr[i];
        }
    }
    int d=abs(sum2-sum1);
    printf("%d",d);
}