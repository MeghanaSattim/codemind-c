#include<stdio.h>
#include<math.h>
int main()
{
    int i,A,B;
    float sum=0;
    scanf("%d%d",&A,&B);
    for (i=A;i<=B;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("%.2f",sum);
}