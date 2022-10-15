//conditional operator(?:)
//input an integer wap that check whther number is odd ,even, or zero

void main()
{
  int a;
  clrscr();
  printf("enter a no");
  scanf("%d",&a);
  a==0? printf("%d is zero ",a):
  a%2==?printf("%d is even",a):
  printf("%d is odd",a);
  getch();
}