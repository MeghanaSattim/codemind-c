#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large;
    large = arr[0];
    for ( int i=1;i<N;i++)
    {
        if (arr[i] > large)
        {
            large=arr[i];
        }
    }
    printf("%d",large);
}