#include <stdio.h>
#include <windows.h>
#include <math.h>
#define HYPOTENUSE(a, b) (sqrt(((a) * (a)) + ((b) * (b))))
#define INCH_TO_MM(d) (25.4 * (d))
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr[0])))

int test_hypotenuse()
{
	float a, b;
	printf("Катеты треугольника: ");
	scanf_s("%f%f", &a, &b);
	printf("Гипотенуза = %.2f\n", HYPOTENUSE(a, b));
	return 0;
}

int test_inch_to_mm()
{
	float d;
	printf("Значение в дюймах = ");
	scanf_s("%f", &d);
	printf("Значение в миллиметрах = %.2f\n", INCH_TO_MM(d));
	return 0;
}

int test_array_size()
{
	printf("На входе - массив из 6 элементов\n");
	int arr[] = {1, 2, 3, 4, 5, 6};
	printf("Кол-во элементов в массиве = %d", ARRAY_SIZE(arr));
	return 0;
}