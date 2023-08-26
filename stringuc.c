#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[100];
 int i,n,c;
 clrscr();
 printf("Enter the string: ");
 gets(s);
// n=strlen(s);
 printf("Enter the position of Upper case");
 scanf("%d",&c);
    s[c-1]=s[c-1]-32;
   printf("%s",s);

 getch();
}
