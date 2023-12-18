#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int count=0;
        for(int num=l;num<=r;num++)
        {
            int ld=num%10;
            if (ld==2||ld==3||ld==9)
            count++;
        }
        printf("%d
",count);
    }
}