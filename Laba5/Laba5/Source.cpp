#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define M 5
#include <locale.h>

void print_matrix(const char str[], int a[][M], int size) {
    puts(str);
    for (int i = 0; i < size; i++, puts(""))
        for (int k = 0; k < size; k++)
            printf("%5d", a[i][k]);
}

void bubble(int a[], int size) {
    for (int i = size - 1; i > 0; i--)
        for (int k = 0; k < i; k++)
            if (a[k] > a[k + 1]) {
                int tmp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = tmp;
            }
}

int main(void) {
    setlocale(LC_ALL, "Rus");
    srand((unsigned)time(NULL) / 2);
    int a[M][M];

    for (int i = 0; i < M; i++)
        for (int k = 0; k < M; k++)
            a[i][k] = rand() % 100;

    print_matrix("Матрица:", a, M);
    for (int i = 0; i < M; i++) {
        bubble(a[i], M);
    }
    print_matrix("\nОтсортированна:", a, M);

    return 0;
}