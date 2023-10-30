#include<stdio.h>
int main()
{
    int H,Si,Se;
    scanf("%d%d%d",&H,&Si,&Se);
    if (H>50 && Si>60 && Se>100)
    {
        printf("10");
    }
    else if (H>50 && Si>60)
    {
        printf("9");
    }
    else if (Si>60 && Se>100)
    {
        printf("8");
    }
    else if (H>50 && Se>100)
    {
        printf("7");
    }
    else if (H>50 || Si>60||Se>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}
