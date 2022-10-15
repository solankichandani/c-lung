/*
	5
	5 4
	5 4 3
	5 4 3 2
	5 4 3 2 1
*/
void main()
{
	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=n; i; i++)
	{
		for(j=1; j<=i; j++);
		printf("%d\t",j);
		printf("\n");
	}
	getch();
}