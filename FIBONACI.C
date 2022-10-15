//fibonaci series
//-1 0 1 1 2 3 5 8 13 .......n nos
void main()
{
	int a=-1,b=1,s,i,n;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		s=a+b;
		printf("%d\t",s);
		a=b;
		b=s;
	}
	getch();
}




