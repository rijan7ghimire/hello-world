/*q.
properties of circle:
    press to calculate
    a for area
    c for circumference
    r for radius
    select : A
    enter a diameter : 5
    area of circle = ......*/
    #include<stdio.h>
    #define pi 3.1415
    void main()

{


   char ch;
   float d,r;
    printf("press to calculate \n A for area \n C for circumference \n R for radius \n\nSelect : ");
    scanf(" %c",&ch);
    printf("enter a diameter: ");
    scanf("%f",&d);
    r=d/2;
    switch(ch)
    {

case 'A':
case 'a':

    printf("the area is : %.2f",(pi*r*r));
    break;
case 'C':
case 'c':
    printf("the circumference is : %.2f",(pi*r*2));
    break;
case 'R':
case 'r':
    printf("the radius is :%.2f",r);
    break;
default:
    printf("invalid option");

    }
}

