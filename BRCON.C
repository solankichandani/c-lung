// break continue pro
void main()
{
	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			if((i+j)%4==0)
				break;
			if((i*j)%4==0)
				continue;
		printf("\n i=%d\tj=%d",i,j);
		}
	}
	getch();
}