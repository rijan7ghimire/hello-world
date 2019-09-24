#include<stdio.h>

void add(); //funtion declaration
//parameter less ==>return type
int sum(int e,int f);
//parameterized ===>non return type
void main()
{
    int a,b;
    printf("enter two numbers a and b ");
    scanf("%d%d",&a,&b);
     sum(a,b);
     print("sum=%d",x);
     print("sum =%d",sum(a,b));
     add();


}


void add() //defination
{
    int x,y;
    printf("enter two numbers ;");
    scanf("%d%d",&x,&y);
    printf("%d +%d = %d",x,y,x+y);

}

int sum(int e,int f)
{
    return (e+f);

}
