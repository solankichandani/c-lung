//example of strcture with in structur

#include<stdio.h>

struct marks
{
	int m1,m2,m3;
};
struct stud
{
	int rn;
	char nm[20];
	struct marks m;
	int total;
};
void main()
{
	struct stud s[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter rollno, name and marks of 3 sub:");
		scanf("%d %s",&s[i].rn,s[i].nm);
		scanf("%d %d %d",&s[i].m.m1,&s[i].m.m2,&s[i].m.m3);
		s[i].total=s[i].m.m1+ s[i].m.m2+ s[i].m.m3;
	}
	printf("\n rollno \t name \t m1 \t m2 \t m3 \t total");
	for(i=0;i<5;i++)
	{
		printf("\n %d \t\t %s",s[i].rn,s[i].nm);
		printf("\t %d",s[i].m.m1);
		printf("\t %d",s[i].m.m2);
		printf("\t %d",s[i].m.m3);
		printf("\t %d",s[i].total);
	}
	getch();
}



