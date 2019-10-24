/*external ie. .txt ,.c ==>
two types of files
text files ==> .c ,,==>less secure==>large size
binary files===> .doc ,. pdf==>more secure ==>small size
"w"=write and create
"a" to write
"r"to read


operation :
     create /open
     read/write
     close*/
#include<stdio.h>
void main()
{FILE *fp;
char ch;
    fp=fopen("example.txt","r");
   while(!feof(fp))
    {
    ch = fgetc(fp);
   putchar(ch);

    }

}
