#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for (i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/N;
    int found=0;
    for (i=0;i<N;i++)
    {
        if (arr[i]==avg)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    printf("True");
    else
    printf("False");
}