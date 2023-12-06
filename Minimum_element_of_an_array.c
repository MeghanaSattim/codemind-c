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
    int i,small;
    small=arr[0];
    for(i=1;i<N;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("%d",small);
}