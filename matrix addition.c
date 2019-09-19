#include<stdio.h>
void main()
{
    int m[2][2],i,j,n[2][2];
    printf("enter matrix 1: \n");
    for (i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)
        {
         printf("m[%d][%d] = ",i,j);
         scanf("%d",&m[i][j]);

        }
        printf("\n");
    }
    printf("enter matrix 2: \n");
    for(i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)

        {printf("n[%d][%d] = ",i,j);
         scanf("%d",&n[i][j]);
    }
    printf("\n");
    }
    printf("the addition of the matrix is;\n");
     for(i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)

        {
            printf("%d\t",(n[i][j]+m[i][j]));

    }
    printf("\n");
    }



}
