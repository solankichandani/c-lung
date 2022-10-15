//input an integer no WAp that check whether the no is paindrom
void main()
{
	int n,r,s=0,m;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		 r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==m)
		printf("\n%d is palindrome no",m);
	else
		printf("\n%d is not palindrome no",m);
	getch();
}