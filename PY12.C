/*
1
1 2
3 2 1
4 3 2 1*/
void main()
{
	int i,n,j;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%5d",j);
	}
		printf("\n");
	}
	getch();
}