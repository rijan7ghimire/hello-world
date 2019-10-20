#include<stdio.h>
void main()
{
    int a[9],i,c;
    printf("enter 10 numbers :\n");
    for(i=0;i<=9;i++)
    {
        printf("\nenter number no.%d :",i+1);
        scanf("%d",&a[i]);
    }
    c=a[0];
    for (i=0;i<9;i++)
    {
        if (c<a[i])
           {
               c=c;}
        else {c=a[i];}

    }
    printf("the smallest number is : %d",c);


}
