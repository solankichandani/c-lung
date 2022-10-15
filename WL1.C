//example of while loop
//input an integer no WAP that print sum of individual digit of the no.

void main()
{
	int n,r,s=0;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("\n s=%d",s);
	getch();
}