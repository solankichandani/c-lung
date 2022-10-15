//input 10 value in array wap that print sum and average of all the number
void main()
{
	int  a[10],i,sum=0;float avg;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
		avg=sum/10;
	for(i=0;i<10;i++)
		printf("\n %d",a[i]);
		printf("\n sum=%d",sum);
		printf("\n avreage=%2.f",avg);
		getch();
}