//preprocessor example
//file inclusion
#include"stdio.h"
#include"conio.h"

//simple macro
#define pi 3.14

//argument macro
#define s(r) r*r

//nested macro
#define c(r) s(r)*r

void main()
{
	float x,a,v;
	clrscr();
	printf("enter radius;");
	scanf("%f",&x);
	a= pi*s(x);
	v=4*pi *c(x)/3;
	printf("\n area of clrcle =%f",a);
	printf("\n valume of sphere =%f",v);
	getch();
}
