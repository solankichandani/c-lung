// sum of raws and columns
/*  1  2  3  6
    4  5  6  15
    5  7  9 */


void main()
{
	int a[2][3],r[2]={0},c[3]={0},i,j;
	clrscr();
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			r[i]+=a[i][j];
			c[j]+=a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("%d\n",r[i]);
	}
	for(i=0;i<3;i++)
		printf("%d\t",c[i]);
	getch();
}