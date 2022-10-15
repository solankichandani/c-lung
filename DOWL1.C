//input nos... one by one untill the no is zero .WAP that print sum and avreage of all the nos.
void main()
{
	int n,s=0,c=0;
	float avg;
	clrscr();
	do
	{
		printf("enter n(0 to terminate:");
		scanf("%d",&n);
		if(n!=0)
		{
			s+=n;
			c++;
		}
	}
	while(n!=0);
	avg=(float)s/c;
	printf("\n sum=%d \n average=%.2f",s,avg);
	getch();
}

