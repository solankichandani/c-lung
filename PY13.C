/*      1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
    */
void main()
{
	int n,i,j;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf("   ");
		for(j=1;j<=i;j++)
		       printf("%3d",j);
		printf("\n");

	}
	getch();
}

