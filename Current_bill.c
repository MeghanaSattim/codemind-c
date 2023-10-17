#include<stdio.h>
int main()
{
    float m;
    scanf("%f",&m);
    if (m<=199)
    {
        printf("%.2f",m*1.20+100);
    }
    else if (m>=200 && m<400)
    {
        printf("%.2f",m*1.50+100);
    }
    else if (m>=400 && m<600)
    {
        printf("%.2f",m*1.80+0.15*m*1.80);
    }
    else 
    {
        printf("%.2f",m*2.00+0.15*m*2.00);
    }
}