#include<stdio.h>
int main()
{
    float p,ch,b,m,cs;
    scanf("%f%f%f%f%f",&p,&ch,&b,&m,&cs);
    float per=(p+ch+b+m+cs)/5;
    if (per>=90)
    {
        printf("Grade A");
    }
    else if (per>=80)
    {
        printf("Grade B");
    }
    else if (per>=70)
    {
        printf("Grade C");
    }
    else if (per>=60)
    {
        printf("Grade D");
    }
    else if (per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}