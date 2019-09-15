#include<stdio.h>
void main()
{
    int i,a,rev,r;
    printf("enter a number : ");
    scanf("%d",&a);
    rev=0;
    for (i=0;a!=0;)
    {
       r=a%10;
       rev=rev*10 + r;
       a/=10;
    }
printf("%d",rev);
}
