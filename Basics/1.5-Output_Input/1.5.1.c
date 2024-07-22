#include <stdio.h>
/* копирование ввода на вывод; 1-я версия */
int main() {
 int с;
 с = getchar();
 while (с != EOF) {
 putchar (с);
 с = getchar();
 }
}