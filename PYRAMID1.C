/* 1
   0 1
   1 0 1
   0 1 0 1
   1 0 1 0 1 */
 void main()
 {
	int i,n,j,k;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%5d",k%2);

		}
		printf("\n");
	}
	getch();
 }