#include<stdio.h>
void login();
int menu();
void option();


void main()
{
    login();

}

void option(int opt)
{
system("cls");
    switch (opt)
    {
    case 1:
        printf("check balance");
        break;
    case 2:
        printf("depsit");
        break;
    case 3:
        printf("withdraw");
        break;
    case 4:
        printf("exit");
        break;
    default:
        printf("invalid option!");
    }
}
int menu()
{
    int a;
    printf("WELCOME TO THE FALANO KO BANK\n");
    printf("Enter\n1.check Balance \n2.deposit\n3.withdrawl\n4.exit\nOption:");
    scanf("%d",&a);
return a;


}

void login()
{int opt;
    char user[10],pass[10];
    int count=1;
    do {
            system("cls");
    printf("Attempt remaining = %d\n",(4-count));
        printf("enter your username : ");
        gets(user);
        printf("enter your password : ");
        gets(pass);
        count++;
        }
        while ((strcmp(user,"admin")!=0 || strcmp(pass,"admin")!=0 )  && count<=3);
        if (count>3)
        {system("cls");
        printf("\nYour Account is locked\n");

        }
        else{
                system("cls");
           opt = menu();
            option(opt);


        }



    }
