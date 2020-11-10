
#include <stdio.h>
#include <iostream>
#include <conio.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int m[150];
	int max;
	int min;

	printf("Введите массив: ");
	for (int i = 0; i < 15; i++)
	{
		scanf_s("%d", &m[i]);
	}

	max = m[0];
	min = m[0];
	for (int i = 1; i < 15; i++)
	{
		if (max < m[i]) max = m[i];
		if (min > m[i]) min = m[i];
	}

	printf("Max: %d", max);

	printf("\nMin: %d", min);

	printf("\nСумма: %d", max + min);
	printf("\nРазность: %d", max - min);
}