/*external ie. .txt ,.c ==>
two types of files
text files ==> .c ,,==>less secure==>large size
binary files===> .doc ,. pdf==>more secure ==>small size


operation :
     create /open
     read/write
     close*/
#include<stdio.h>
void main()
{FILE *fp;
char ch,t;
    fp=fopen("example.txt","a");
    printf("enter terminating character :");
    scanf(" %c",&t);
    while (ch!=t)
    {
        ch=getchar();
        fputc(ch,fp);

    }

fclose(fp);
system("cls");
printf("the file content are  :\n\n");
fp=fopen("example.txt","r");
        if (fp==NULL)
    {
        printf("file not found");

    }
    else{
   while(!feof(fp))
    {
    ch = fgetc(fp);
   putchar(ch);

    }}
    fclose(fp);
}
