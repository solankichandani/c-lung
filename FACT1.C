//to find faction value of the given no.

long int fact(int);
void main()
{
	int n;
	long int f;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	f=fact(n);
	printf("\n factorial value of %d is %d",n,f);
	getch();
}
long int fact(int n)
{
	long int f=1;
	int i;
	for(i=1;i<=n;i++)
		f=f*i;
	return(f);
}

