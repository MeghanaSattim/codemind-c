#include<stdio.h>
int main()
{
    int cp ,sp;
    scanf("%d%d",&cp,&sp);
   int profit=sp-cp;
   int loss=cp-sp;
    if(sp>cp)
    {
        printf("Profit");
    }
    else if (cp>sp)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit and No Loss");
    }
}