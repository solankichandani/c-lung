/* A B C D E
     B C D E
       C D E
	 D E
	   E */
void main()
{
	int i,j,n;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("   ");
		for(j=i;j<=n;j++)
			printf("  %c",j+64);
			printf("\n");
	}
	getch();
}

