// string operation

#include<string.h>

void main()
{
	char s1[20],s2[20],s3[20];
	int l1,l2,l3;
	clrscr();
	printf("enter two string:");
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	printf("\n strcmp(s1,s2)=%d",strcmp(s1,s2));
	printf("\nlength of %s is %d",s1,l1);
	printf("\nlength of %s is %d",s2,l2);
	strcpy(s3,s2);
	printf("\n s1=%s",s1);
	printf("\n s2=%s",s2);
	printf("\n s3=%s",s3);
	strcat(s1,s2);
	printf("\n now s1=%s",s1);
	getch();
}