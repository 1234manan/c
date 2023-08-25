#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 char ch='A';
 clrscr();
 printf("Entrer a Number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(i==1 || i==n || j==1 || j==n)
   printf("*");
  else
   printf("%c",ch++);
  }
  printf("\n");
 }
 getch();
}
