#include<stdio.h>
void main()
{
    int i,a,k;
   for (a=1;a<=5;a++)
{
    for (i=5;i>=a;i--)
    {
    printf (" ");
    }
    for(k=1;k<=(2*a-1);k++)

{printf("*");}
printf("\n");}
}
