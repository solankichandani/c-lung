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
	for(i=n; i>=1; i--)
	{
		for(j=n; j>=i; j--)
		    printf("%5d\t",j);
		    printf("\n");
	}
	getch();
}