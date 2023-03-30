#include<stdio.h>
void main()
{
char str[200];
int y=0,x;
printf("enter the text to find number of words: \n");
scanf("%[^\n]str",str);
for(x=0;str[x]!=0;x++)
{
if (str[x]==' '&& str[x+1]!=' ')
y++;
}
printf("the no of words in the given string is:%d\n",y+1);
}
