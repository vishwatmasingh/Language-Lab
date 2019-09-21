#include <stdio.h>
#include <stdlib.h>

  int main()
    {
    FILE *fp;
    char ch,file[100];
    int character=0,word=0,lines=0;

   printf("enter file name you wish to open :-");
   gets(file);


   fp=fopen(file,"r");

   if (fp)
    {
      while ((ch=getc(fp)) !=EOF)
       {
         if( ch !='\n')
         character++;
         if( ch == ' '||ch=='\n')
         word++;
         if( ch == '\n')
         lines++;
       }
       printf("Character :- %d\n Word :- %d\n line:- %d\n",character,word,lines);
    }
   else
    {
    printf("file can't be open");
    }



    return 0;
   }
