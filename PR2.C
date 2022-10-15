//input two number wap that print sum of the number

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  clrscr();
  printf("enter two number:");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("%d + %d =%d",a,b,c);
  getch();
}