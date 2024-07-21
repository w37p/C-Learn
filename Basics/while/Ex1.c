#include <stdio.h>

// Функция для печати таблицы температур
void print_temperature_table(int lower, int upper, int step) { //void - это 
    int fahr, celsius;
    fahr = lower;
    printf("Temperature table\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int main() {
    int lower = 0;   // нижняя граница таблицы температур
    int upper = 300; // верхняя граница
    int step = 20;   // шаг

    // Вызов функции для печати таблицы температур
    print_temperature_table(lower, upper, step);
    return 0;
}

