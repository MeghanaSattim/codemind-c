#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count =0,flag=0;
    for (i=0;i<n;i++)
    {
        if (arr[i]%2!=0)
        {
        flag=1;
        }
        else
        {
            if (arr[i]%2==0 && flag==1)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}