#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,n;
 clrscr();
 printf("Entrer a Number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   printf("%d\t",i);
  }
  printf("\n");
 }
 return();
}
