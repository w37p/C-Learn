#include <stdio.h>
/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */
main() {
  int fahr, celsius;
  int lower, upper, step;
  lower = 0; /* нижняя граница таблицы температур */
  upper = 300; /* верхняя граница */
  step = 20;   /* шаг */
  fahr = lower;
  while (fahr <= upper) {  // while (0<=300) 
    celsius = 5 * (fahr - 32) / 9; // celcius = 5 * (0 - 32) / 9 = - 17
    printf("%d\t%d\n", fahr, celsius); // 0, -17
    fahr = fahr + step; // fahr = 20 
  }
}

// 2 step fahr = 20
// while (20 <= 300)
// celcius = 5 * (20 - 32) / 9 = -6
// 20, -6

// 3 step fahr = 40 
// while (40 <= 300)
// celcius = 5* (40-32)/9 = 4
// 40, 4