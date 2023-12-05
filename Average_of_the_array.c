#include<stdio.h>
int main()
{
    int N;
    scanf ("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i,sum=0;
    for ( i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }
    float avg = (float)sum/i;
    printf("%.2f",avg);
}