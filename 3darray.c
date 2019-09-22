
#include<stdio.h>
void main()
{

    int k,l,n;
    int m[n][k][l],i,j,o,sum;
    printf("enter the no of matrices(>2) :");
    scanf("%d",&n);
    printf("enter the no of rows and columns for addition :\n");
    printf("enter rows : ");
    scanf("%d",&k);
    printf("enter columns : ");
    scanf("%d",&l);
    for (o=0;o<n;o++)
        {
            printf("enter matrix %d : ",o+1);

    for (i=0;i<k;i++)
    {
        for (j=0;j<l;j++)
        {
         printf("m[%d][%d][%d] = ",o,i,j);
         scanf("%d",&m[o][i][j]);

        }
    }
    }
    for(i=0;i<k;i++)
    {
       for(j=0;j<l;j++)
       {
           for(o=0;o<n;o++)
           {
               sum=sum+m[o][i][j];

           }
           printf("%d \t",sum);
           sum=0;

       }
       printf("\n");

    }

}
