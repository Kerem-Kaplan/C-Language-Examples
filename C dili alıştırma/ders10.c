#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("t�rk�e");
	getch();
	return 0;
}
