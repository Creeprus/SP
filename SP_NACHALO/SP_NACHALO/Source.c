#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int choose;

	printf("�������� ��������� (1, 2, 3, 4, 5 ��� ����� ������ ����� ��� ����������� ��������� \n");
	scanf_s("%decimal", &choose);
	switch (choose)
	{
	case 1:
	{
		task1();
		break;
	}
	case 2:
	{
		task2();
		break;
	}
	case 3:
	{
		task3();
		break;
	}
	case 4:
	{
		task4();
		break;
	}
	case 5:
	{
		task5();
		break;
	}
	default:
	{
		goto a;
	}
	}
	goto b;
	a:;
	
	int number;
	scanf_s("%decimal",&number);
	printf("���������� number %d ",number);
	printf("\n���������� number %p \n", &number);
	printf("\n���������� number %c \n", number);
	for (size_t i = 0; i < 256; i++)
	{
		printf("%c ",i);
	}
b:;
	return 0;
}
int task1(void)
{
	setlocale(LC_ALL, "");
	int first; int second;
	printf("������� ������ �����\n ");
	scanf_s("%decimal", &first);
	printf("������� ������ ����� - ���������\n ");
	scanf_s("%decimal", &second);
	int original = first;
	for (int i = 1; i < second; i++)
	{
		first = first + original;
	}
	printf("��������� %d\n ", first);

	return 0;
}
int task2(void)
{
	setlocale(LC_ALL, "");
	int array[10];
	int even=0; int uneven=0;
	for (int i = 0; i < 10; i++)
	{
		printf("������� �������� ������ �������\n ");
		scanf_s("%decimal", &array[i]);	
	}
	for (int i = 0; i < 10; i++)
	{
		if (array[i] != 0)
		{
			if (array[i] % 2 == 0)
			{
				even++;
			}
			if (array[i] % 2 != 0)
			{
				uneven++;
			}
		}
	}
	printf("���������� ������ �����: %d\n ",even);	printf("���������� �������� �����: %d\n ", uneven);
	return 0;
}
int task_string(void)
{
	setlocale(LC_ALL, "");
	char string[50];
	printf_s("\n������� ������\n");
	scanf_s("%s",string,50);
	for (int i = 0; i < 100; i++)
	{
		printf("%c", string[i]);
	}
	printf("\n������ ���������� int %d", sizeof(string)/sizeof(string[0]));
	int true_size = 0;
	while (string[true_size] != NULL)
	{
		true_size++;
	}
	printf("\n��������� ������ ������� %d", true_size);
	return 0;
}
int task3(void)
{
	setlocale(LC_ALL, "");
	char string[50];
	printf_s("\n������� ������\n");
	int true_size = 0;
	
	scanf_s("%s", string, 50);
	while (string[true_size] != NULL)
	{
		true_size++;
	}
	for (int i = 0; i < true_size; i++)
	{
		if (string[i] == '?')
		{
			string[i] = '!';
		}
	}
	
	printf("\n�������� ����� %s", string);
	return 0;
}
int task4(void)
{
	setlocale(LC_ALL, "");
	int a, b, c;
	printf_s("\n������� �������� ������� �������\n");
	scanf_s("%d", &a);
	printf_s("\n������� �������� ������� �������\n");
	scanf_s("%d", &b);
	printf_s("\n������� �������� �������� �������\n");
	scanf_s("%d", &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		
		printf_s("\n����������� ����� ������������\n");
		if (a == b && b == c)
		{
			printf("����������� ��������������\n");
		}
		else
		{
			printf("����������� ��������������\n");
		}
		if (c * c == a * a + b * b || a * a == c * c + b * b || b * b == a * a + c * c)
		{
			printf("����������� �������������\n");
		}
	}
	else
	{
		printf("������������ �� ����������\n");
	}
	return 0;
}
int task5(void)
{
	setlocale(LC_ALL, "");
	int first; int second;
	printf("������� ������ �����\n ");
	scanf_s("%decimal", &first);
	printf("������� ������ ����� - �������\n ");
	scanf_s("%decimal", &second);
	int original = first;
	for (int i = 1; i < second; i++)
	{
		first = first * original;
	}
	printf("��������� %d\n ", first);

	return 0;
}