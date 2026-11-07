#include <stdio.h>

// 2.1.1
void z2_1()
{
	int a, b, max, min;

	printf("Введите первое число = ");
	scanf_s("%d", &a);
	printf("Введите второе число = ");
	scanf_s("%d", &b);

	if (a > b)
		max = a, min = b;
	else
		max = b, min = a;


	printf("Большее число = %d\n", max);
	printf("Меньшее число = %d\n", min);
}


// 2.1.2
void z2_2()
{
	int v1, v2, v3, max;

	printf("Введите 3 числа: ");
	scanf_s("%d%d%d", &v1, &v2, &v3);

	max = v1;
	if (v2 > max)
		max = v2;
	if (v3 > max)
		max = v3;

	printf("max = %d\n", max);
}


// 2.1.3
void z2_3()
{
	int temp;

	printf("Введите температуру в помещении: ");
	scanf_s("%d", &temp);

	if (temp < 18)
		printf("холодно\n");
	else if (temp < 22)
		printf("прохладно\n");
	else if (temp < 26)
		printf("тепло\n");
	else
		printf("жарко\n");
}


// 2.1.4
void z2_4()
{
	int v1, v2, v3, v4, v5, max;

	printf("Введите 5 чисел: ");
	scanf_s("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5);

	max = v1;
	if (max < v2)
		max = v2;
	if (max < v3)
		max = v3;
	if (max < v4)
		max = v4;
	if (max < v5)
		max = v5;

	printf("Самое большое из введенных чисел %d\n", max);
}


// 2.1.5
void z2_5()
{
	int temp;
	printf("Введите температуру: ");
	scanf_s("%d", &temp);

	if (temp < 0)
		printf("Мороз\n");
	else if (temp < 15)
		printf("Прохладно\n");
	else if (temp < 25)
		printf("Тепло\n");
	else
		printf("Жарко\n");
}


// 2.1.6
void z2_6()
{
	int price;
	printf("Введите стоимость ноутбука: ");
	scanf_s("%d", &price);

	if (price < 40000)
		printf("Дешево\n");
	else if (price < 80000)
		printf("Нормально\n");
	else if (price < 150000)
		printf("Дорого\n");
	else
		printf("Ужас дорого\n");
}


// 2.1.7
void z2_7()
{
	int speed;
	printf("Введите скорость интернета (Мбит/с): ");
	scanf_s("%d", &speed);

	if (speed < 5)
		printf("Очень медленно»\n");
	else if (speed < 20)
		printf("Медленно\n");
	else if (speed < 50)
		printf("Нормально\n");
	else if (speed < 100)
		printf("Быстро\n");
	else if (speed < 500)
		printf("Очень быстро\n");
	else
		printf("Мгновенно\n");
}


// 2.2.1
void z2_8()
{
	int n, i = 1;
	printf("n = ");
	scanf_s("%d", &n);

	do {
		printf("%d ", i);
		i++;
	} while (i <= n);
	printf("\n");
}


// 2.2.2
void z2_9()
{
	int i = 0, stepen = 1;

	do {
		printf("2^%d = %d\n", i, stepen);
		i++;
		stepen *= 2;
	} while (i <= 5);
}


// 2.2.3
void z2_10()
{
	int sum, year = 0;
	float percent;

	printf("summa = ");
	scanf_s("%d", &sum);
	printf("procent = ");
	scanf_s("%f", &percent);

	do {
		printf("%d RUB in %d year\n", sum, year);
		sum = (sum * (100 + percent)) / 100;
		year++;
	} while (year <= 10);
}


// 2.2.4
void z2_11()
{
	int n, even_n = 2, count = 1;

	printf("Введите n: ");
	scanf_s("%d", &n);

	do {
		printf("%d ", even_n);
		even_n += 2;
		count++;
	} while (count <= n);
	printf("\n");
}


// 2.2.5
void z2_12()
{
	int n, a, num = 0, cnt = 0;

	printf("n = ");
	scanf_s("%d", &n);
	printf("a = ");
	scanf_s("%d", &a);

	do {
		if (num != 0)
			printf("%d ", num);
		num += a;
		cnt++;
	} while (cnt <= n);
	printf("\n");
}


// 2.2.6
void z2_13()
{
	int A, D, N;
	int i = 1;

	printf("Введите первый член арифметической прогрессии: ");
	scanf_s("%d", &A);
	printf("Введите разность арифметической прогрессии: ");
	scanf_s("%d", &D);
	printf("Введите количество членов арифметической прогрессии: ");
	scanf_s("%d", &N);

	if (N == 1)
		printf("%d\n", A);
	else
		do {
			printf("%d ", A);
			A += D;
			i++;
		} while (i <= N);
	printf("\n");
}


// 2.2.7
void z2_14()
{
	int price, monthly_payment, months = 0, money = 0;

	printf("Введите стоимость товара: ");
	scanf_s("%d", &price);
	printf("Введите сумму, откладываемую ежемесячно: ");
	scanf_s("%d", &monthly_payment);

	do {
		money += monthly_payment;
		months++;
	} while (money < price);

	printf("Цена товара: %d\n", price);
	printf("Накоплено: %d\n", money);
	printf("Понадобится %d месяцев\n", months);
}