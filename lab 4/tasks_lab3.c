#include <stdio.h>
#include <math.h>

// 3.1.1
void z3_1_1()
{
	int a = 1;
	do {
		printf("%d ", a);
		a++;
	} while (a <= 10);
}

void z3_1_2()
{
	int a = 10;
	do {
		printf("%d ", a);
		a--;
	} while (a >= 1);
}

void z3_1_3()
{
	int a = 1, i = 0;
	do {
		printf("%d ", a);
		a += 2;
		i++;
	} while (i < 5);
}


// 3.1.2
void z3_2()
{
	int a = 100;
	while (a >= 10) {
		printf("%d ", a);
		a -= 10;
	}
}


// 3.1.3
void z3_3()
{
	int a = 1000;
	while (a >= 100) {
		printf("%d ", a);
		a -= 100;
	}
}


// 3.1.4
void z3_4()
{
	int s, n;
	printf("s = ");
	scanf_s("%d", &s);
	printf("n = ");
	scanf_s("%d", &n);
	int year = 0;
	while (year <= 10) {
		printf("Через %d лет: %d\n", year, s);
		s = (s * (100 + n)) / 100;
		year++;
	}
}


// 3.1.5
void z3_5()
{
	int n, a = 1000;
	printf("n = ");
	scanf_s("%d", &n);
	while (a >= 0) {
		printf("%d ", a);
		a -= n;
	}
}


// 3.1.6
void z3_6()
{
	int n, i = 1, a = 1;
	printf("n = ");
	scanf_s("%d", &n);
	while (i <= n) {
		printf("%d ", a);
		i++;
		a *= i;
	}
}


// 3.1.7
void z3_7()
{
	int n, i = 0, f1 = 0, f2 = 1;
	printf("n = ");
	scanf_s("%d", &n);
	while (n != i) {
		int temp = f1;
		f1 = f2;
		f2 += temp;
		i++;
		printf("%d ", f1);
	}
}


// 3.1.8
void z3_8()
{
	int n;
	printf("n = ");
	scanf_s("%d", &n);
	int i = 2;
	while (i <= sqrt(n)) {
		while (n % i == 0) {
			printf("%d ", i);
			n /= i;
		}
		i++;

	}
}


void z3_9()
{
	int n, m;
	printf("n = ");
	scanf_s("%d", &n);
	printf("m = ");
	scanf_s("%d", &m);
	int i = 1;
	do {
		int j = 1;
		do {
			printf("%d ", i * 10 + j);
			j++;
		} while (j <= m);
		printf("\n");
		i++;
	} while (i <= n);
}


void z3_10()
{
	int i = 1;
	while (i <= 10) {
		int j = 1;
		while (j <= 10) {
			printf("%4d", i * j);
			j++;
		}
		printf("\n");
		i++;
	}
}


void z3_11()
{
	int i = 5;
	while (i >= 1) {
		int j = i - 1;
		printf("%d", i);
		while (j >= 1) {
			printf("%d", j);
			j--;
		}
		printf("\n");
		i--;
	}
}


void z3_12() {
	int max = 5;
	while (max >= 1) {
		int space = 5 - max;
		while (space > 0) {
			printf(" ");
			space--;
		}
		int i = 1;
		while (i <= max) {
			printf("%d", i);
			i++;
		}
		printf("\n");
		max--;
	}
	max = 2;
	while (max <= 5) {
		int space = 5 - max;
		while (space > 0) {
			printf(" ");
			space--;
		}
		int i = 1;
		while (i <= max) {
			printf("%d", i);
			i++;
		}
		printf("\n");
		max++;
	}
}