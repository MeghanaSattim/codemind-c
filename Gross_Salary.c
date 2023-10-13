#include<stdio.h>
int main()
{
    float BasicSalary,DA,HRA,GrossSalary;
    scanf("%f",&BasicSalary);
    if(BasicSalary<=10000)
    {
        DA=(BasicSalary*80)/100;
        HRA=(BasicSalary*20)/100;
    }
    else if (BasicSalary<=20000)
    {
        DA=(BasicSalary*90)/100;
        HRA=(BasicSalary*25)/100;
    }
    else
    {
        DA=(BasicSalary*95)/100;
        HRA=(BasicSalary*30)/100;
    }     
    GrossSalary=BasicSalary+DA+HRA;
    printf("%.2f",GrossSalary);
    
}