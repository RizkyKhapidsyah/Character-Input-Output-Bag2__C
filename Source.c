#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b;

	printf("Type two letters: ");
	a = getchar();
	b = getchar();
	printf("You typed '");
	putchar(a);
	printf("' and '");
	putchar(b);
	printf("'.\n");

	_getch();
	return(0);
}

