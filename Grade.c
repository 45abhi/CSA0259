#include<stdio.h>
#include<conio.h>
struct stud{char nam[20];
int obtain_mark;
int per;
char grad[5];
};
struct stud s[5];
int i;
int main()
{
for(i=1;i<=5;i++)
{
printf("enter %d student name: \n",i);
scanf("%s",&s[i].nam);	
printf("enter %d student obtained mark: \n",i);
scanf("%d",&s[i].obtain_mark);
fflush(stdin);
}	
for(i=1; i<=5; i++)
s[i].per=s[i].obtain_mark/5;
for(i=1;i<=5;i++)
{
if(s[i].per>=80)
strcpy(s[i].grad,"A");
else if(s[i].per>=60)
strcpy(s[i].grad,"B");
else if(s[i].per>=50)
strcpy(s[i].grad,"C");
else if(s[i].per>=40)
strcpy(s[i].grad,"D");
else
strcpy(s[i].grad,"A+");
}
for(i=1; i<=5; i++)
printf("\n%d student %s has obtained grade %s ",i,s[i].nam,s[i].grad);
getch();
return 0;
}
