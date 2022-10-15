// else if ladder
// input an int no wap that check whether the numbers is positive negetive or zero

void main()
{
	int n;
	clrscr();
	printf("enter a no.");
	scanf("%d",&n);
	if(n==0)
		printf("%d is zero",n);
	else if(n>0)
		printf("%d is positive",n);
	else
		printf("%d is negtive",n);
	getch();
}