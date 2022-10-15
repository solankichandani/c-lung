// memory fllocation
void main()
{
	float a[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]:",i+1);
		scanf("%f",&a[i]);
	}
		printf("\n subscript \t value \t memory  address");
		for(i=0;i<5;i++)
		printf("\n %d \t\t%2f \t %u",i+1,a[i],&a[i]);
		getch();
}