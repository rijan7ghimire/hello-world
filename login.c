#include<stdio.h>
void main()
{
    char usr[10],pwd[10];
    printf("enter username : ");
    gets(usr);
    printf("enter password ;");
    gets(pwd);
    if (strcmp(usr,"admin")==0)
      {if(strcmp(pwd,"12345")==0)
      system("cls");
      printf("you are logged in ");}
    else
    {system("cls");
        printf("the username or password is incorrect");}






    //puts(usr);
    //puts(pwd);
}
