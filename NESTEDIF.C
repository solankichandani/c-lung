//nested if

//input an int no wap that check whether the number is +ve -ve or zero
void main()
{
	int n;
	clrscr();
	printf("enter a no.");
	scanf("%d",&n);
	if(n!=0)
	{
		if(n>0)
			printf("%d is positive",n);
		else
			printf("%d is negative",n);
	}
	else
		printf("%d is zero",n);
	getch();
}
