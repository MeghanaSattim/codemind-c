#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    int test=A+(2*B);
    if (test>=X)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}