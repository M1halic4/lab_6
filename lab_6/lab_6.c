#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <locale.h>
#include <math.h>

int task1();
int task1();

int main()
{
	setlocale(LC_ALL, "RUS");

	task2();

	return 0;
}

int task1()
{

	//1
	//Инициализация переменных
	int years;

	//Ввод года пользователем
	printf("Введите год: ");
	scanf("%d", &years);

	//Проверка на високосный год
	if (years % 4 == 0 && years %100 != 0 && years % 400 != 0) printf("Год %d високосный", years);
	//Если год не високосный
	else printf("Год %d не високосный", years);

	return 0;
}

int task2()
{
	//Вариант 9

	//Инициализация переменной
	double x;

	//Ввод пользователм х
	printf("Введите x: ");
	scanf("%lf", &x);

	//Тернарное условие
	x >= 0 && x <= 1 ? printf("%lf", pow(x, 2) - x) : printf("%lf", pow(x, 2) - sin(M_PI * pow(x, 2)));
	//Контрольный пример. При х = 0,5, вывод: -0,25. При х = 4, вывод: 16
	
	return 0;
}