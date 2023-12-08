#include<stdio.h>
#include<math.h>
int main()
{
    int n,sumofsquares=0,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sumofsquares += pow(i,2);
        sum += i;
    }
    int squareofsum = pow(sum,2);
    int absDifference= abs(squareofsum-sumofsquares);
    printf("%d",absDifference);
    
}