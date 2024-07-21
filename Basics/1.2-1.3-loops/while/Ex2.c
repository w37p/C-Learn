#include <stdio.h>

// Функция для печати таблицы температур
void print_temperature_table(int lower, int upper, int step) { 
    int fahr, celsius;
    celsius = lower;
    printf("Temperature table\n");
    while (celsius <= upper) {
        fahr = (celsius * 9 / 5) + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
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