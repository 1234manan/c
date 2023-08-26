#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[100],temp;
 int i,n,m;
 clrscr();
 printf("Enter the string: ");
 gets(s);
 n=strlen(s);
 m=n-1;
 for(i=0;i<=m;i++)
 {
 temp=s[i];
 s[i]=s[m];
 s[m]=temp;
 m--;
 }

  printf("%s",s);
 getch();
}
