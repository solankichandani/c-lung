// break example
void main()
{
	int n,i,j;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(i%5==0)
			break;
		printf("\ni=%d",i);
	}
     getch();
}
