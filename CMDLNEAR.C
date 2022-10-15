// example of comman line argument

void main(int argc,char*argv[])
{
	int sum =0,i,n;
	clrscr();
	for(i=1;i<argc;i++)
	{
		n=atoi(argv[i]);
		printf("\n %d",n);
		sum+=n;
	}
	printf("\n sum=%d",sum);
	getch();
}


