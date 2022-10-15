//2 4 6 8 10.......n nos

void main()
{
	int i,n,a=2;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n)
	for(i=1; i<=n; i++)
	{
		printf("%d\t",a);
		a=a+2;
	}
	getch();
}
