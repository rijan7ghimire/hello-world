#include<stdio.h>
void main()
{
    int num;

    printf("enter a day number :");
    scanf ("%d",&num);
    switch(num)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("MOnday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday ");
        break;
    case 7:
        printf("saturday");
        break;
    default:
        printf("invalid day");
    }
}
