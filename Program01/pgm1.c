#include<stdio.h>
#include<string.h>

int main()
{
int n,count=0,c=0,i;
char str[100];

printf("enter the string :-");
gets(str);

n=strlen(str);


printf("Total no. of character :- %d \n",n);


for(i=0;i<n;i++)
{
if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
   c++;

}

printf("Total no. of vowels :- %d \n ",c);

for(i=0;i<n;i++)
 {
  if (str[i]==' ')
   count++;
 }

printf("Total number of whitespaces :- %d \n",count);

    return 0;
}
