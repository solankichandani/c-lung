//one dimensional arrey example
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
	for(i=0;i<5;i++)
		printf("\n a[%d]=%2.f",i+1,a[i]);
	getch();
}