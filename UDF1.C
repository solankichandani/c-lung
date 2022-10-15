// fuction without argument and without return vaule

void main()
{
	clrscr();
	add();
	getch();
}
add()
{
	int a,b,c;
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n%d+%d=%d",a,b,c);
}