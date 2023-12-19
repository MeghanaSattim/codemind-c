#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f,count=0;
    scanf("%d",&f);
    for (i=0;i<n;i++)
    {
        if (arr[i]==f)
        {
            count++;
        }
    }
    printf("%d",count);
}