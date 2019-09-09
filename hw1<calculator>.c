/*calculator:
    press:
        + to add
        -to subtract
        * to multiply
        / to divide

 select ;+

enter two numbers :4 5
4+5 =9*/
#include<stdio.h>
void main()
{
 char a;
 int b,c;
printf("PRESS : \n  + to ADD \n  - to SUBTRACT \n  * to MULTIPLY \n  / to DIVIDE \nSELECT : ");
scanf(" %c",&a);
printf("Enter two numbers : ");
scanf("%d%d",&b,&c);
switch (a)
{
    case '+':
     printf("The sum of two numbers is :%d ",b+c);
     break;
     case '-':
     printf("the subtraction of two numbers is %d",b-c);
     break;
     case '*':
     printf("the multiplication of two numbers is %d",b*c);
     break;
     case '/':
     printf("the division if two numbers is %d",b/c);
     break;
     default:
        printf("the input is invalid please run the prograrm again ");

}

}
