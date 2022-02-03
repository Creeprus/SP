#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int number;
	int first; int second;
	scanf_s("%decimal", &number);
	printf("Переменная number %d ", number);
	return 0;
}