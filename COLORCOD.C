//wap that accept color code and display color name

void main()
{
	char c;
	clrscr();
	printf("\n color code in R-RED \n G-GREEN \n B-BLUE");
	printf("\n enter color code ");
	scanf("%c", &c);
	switch(c)
	{
		case'r':
		case'R':
			printf("\n red");
			break;
		case'g':
		case'G':
			printf("\n green");
			break;
		case'b':
		case'B':
			printf("\n blue");
			break;
		default:
			printf("\n invalid colr code");
			break;
		}
		getch();
	}