//pointer varibale

void main()
{
	int a[5],i,*p;
	clrscr();
	p=a;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]:");
		scanf("%d",p);
		p++;
	}
		p=a;
		for(i=0;i<5;i++)
		{
			printf("\n a[%d]=%d",i,*p);
			p++;
		}
		getch();
}