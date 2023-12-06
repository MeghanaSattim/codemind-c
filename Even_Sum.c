#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i,sum=0;
    for (i=0;i<N;i++)
    {
        if (arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}