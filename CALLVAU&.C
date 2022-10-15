//example of call by value & call by reference

void swap(int x,int y);
void swap1(int *x,int *y);

void main()
{
	int a,b;
	clrscr();
	printf("enter two nos:");
	scanf("%d %d ",&a,&b);
	printf("\n call by value");
	printf("\n before calling");
	printf("\n a=%d \t b=%d",a,b);
	swap(a,b);
	printf("\n after calling:");
	printf("\n a=%d \tb=%d",a,b);
	printf("\n call by referance");
	printf("\n before calling:");
	printf("\n a=%d t\b=%d",a,b);
	swap1(&a,&b);
	printf("\n after calling:");
	printf("\n a=%d \tb=%d",a,b);
	getch();
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("\n inside swap functions a=%d \tb=%d",x,y);
}
void swap1(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("\n inside swap1 function ");
}