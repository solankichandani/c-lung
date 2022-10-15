//fuction with argument and return value

void main()
{
	int x,y,z;
	clrscr();
	printf("enter two nod:");
	scanf("%d %d",&x,&y);
	z=add(x,y);
	printf("\n%d+%d=%d",x,y,z);
	getch();
}
add(int a, int b)
{
	return(a+b);
}