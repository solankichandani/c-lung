//goto example
// prime no.

void main()
{
	int n,i;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	L1:
		if(n%i==0)
		{
			printf("\n%d is not prime",n);
			goto L2;
		}
		i++;
		if(i<n)
			goto L1;
		printf("\n%d is prime",n);
	L2:
	getch();
}

