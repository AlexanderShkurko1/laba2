#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int arr[30][30];                      //Объявление переменных
	int p = 1;
	int n;

	printf("Введите n: ");
	scanf_s("%d", &n);                          //Ввод размера матрицы

	for (int i = 0; i < n; i++)           //Выполняется для каждой строки
	{
		for (int j = 0; j < n; j++)       //Для каждого элемента строки 
			scanf_s("%d", &arr[i][j]);            //Присваивание элементу с индексом i j вводимого значения 
	}

	// Находим произведение элементов второй строки                                            
	for (int j = 0; j < n; j++) {
		p *= arr[1][j];
	}
	printf("\nПроизв. элементов 2 строки: %d", p);
	getchar();
}


