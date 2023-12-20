#include<stdio.h>
int main()
{
    int M,N,sum=0;
    scanf("%d%d",&M,&N);
    int mat[M][N];
    int i,j;
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            sum=sum+mat[i][j];
        }
    }
    printf("%d",sum);
}