#include <stdio.h>
#include <windows.h>
#include <math.h>


// 4.1.1

// функция определения весокосного года
int isLeapYear(int year) {
	if (year % 400 == 0)
		return 1;
	if (year % 100 == 0)
		return 0;
	if (year % 4 == 0)
		return 1;
	return 0;
}


int z4_1() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	int num = a;
	do {
		if (isLeapYear(num))
			printf("%d\t", num);
		num++;
	} while (num <= b);

	return 0;
}


// 4.1.2

#include <stdbool.h>

// функция определения простого числа
bool is_prime(int n) {
    if (n <= 1) {
        return 0;
    }

    if (n <= 3) {
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}


int z4_2() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	int num = a;
	do {
		if (is_prime(num))
			printf("%d\t", num);
		num++;

	} while (num <= b);
	return 0;	
}


// 4_1_3

// функция нахождения суммы цифр числа
int sumDigits(int n) {
	n = abs(n);
	int sum = 0;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


int z4_3() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	int num = a;
	do {
		printf("Сумма цифр(%d) = %d\n", num, sumDigits(num));
		num++;
	} while (num <= b);
	return 0;
}


// 4.1.4

int fine_GR(int v, int vmax) {
	if (v < vmax) return 0;
	if (v < vmax + 10) return 20;
	if (v < vmax + 15) return 40;
	if (v < vmax + 20) return 60;
	if (v < vmax + 25) return 70;
	if (v < vmax + 30) return 80;
	if (v < vmax + 40) return 120;
	if (v < vmax + 50) return 160;
	if (v < vmax + 60) return 240;
	if (v < vmax + 70) return 440;
	return 600;
}


int z4_4() {
	int a, b, c;
	printf("Введите 3 целых числа:\n");
	printf("1. Разрешенную скорость\n");
	printf("2. Начало анализируемого интервала\n");
	printf("3. Конец анализируемого интервала\n");
	
	int n = scanf("%d%d%d", &a, &b, &c);

	if (n != 3) {
		printf("Ввели %d чисел\n", n);
		printf("ОШИБКА: Введены не все данные!");
		return;
	}

	int vMax = a;
	int v = b;
	do {
		printf("Если вы едете со скоростью %d вместо %d это вам встанет в %d\n",
			v, vMax, fine_GR(v, vMax));
		v += 1;
	} while (v <= c);
}

// 4.1.5

int discount_percent(float price) {
	if (price >= 10000.0) return 15;
	else if (price >= 5000.0) return 10;
	else if (price >= 1000.0) return 5;
	else return 0;
}

int z4_5() {
	float total;
	printf("total = ");
	scanf_s("%f", &total);
	int discount = discount_percent(total);
	float final_price = total * (1.0 - (discount/100.0));

	printf("Сумма заказа: %.2f руб.\n", total);
	printf("Ваша скидка: %d%%\n", discount);
	printf("Итого к оплате: %.2f руб.\n", final_price);

	return 0;
}


// 4.1.6

int PersonalIncomeTax_RF(int salary) {
	int tax = 0, delta;
	if (salary > 190000) {
		delta = salary - 190000;
		salary = 190000;
		tax += delta * 0.45;
	}

	if (salary > 135000) {
		delta = salary - 135000;
		salary = 135000;
		tax += delta * 0.37;
	}

	if (salary > 45000) {
		delta = salary - 45000;
		salary = 45000;
		tax += delta * 0.325;
	}

	if (salary > 18200) {
		delta = salary - 18200;
		salary = 18200;
		tax += delta * 0.19;
	}

	return tax;
}


int z4_6() {
	int a, b, c;

	printf("Введите 3 целых числа:\n");
	printf("1. Начало анализируемого интервала\n");
	printf("2. Конец анализируемого интервала\n");
	printf("3. Шаг\n");

	int n = scanf("%d%d%d", &a, &b, &c);

	if (n != 3) {
		printf("Ввели %d чисел\n", n);
		printf("ОШИБКА: Введены не все данные!");
		return;
	}

	int salary = a;
	do {
		int tax = PersonalIncomeTax_RF(salary);
		double percent = ((double)tax / (double)salary) * 100;
		printf("Для зарплаты в %d у.е. НДФЛ = %d у.е.. Это составляет %.2f%% от зарплаты\n",
			salary, tax, percent);
		salary += c;
	} while (salary <= b);
}
