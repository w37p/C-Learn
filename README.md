# C-Learn [SpeedRun книги по С](http://www.r-5.org/files/books/computers/languages/c/kr/Brian_Kernighan_Dennis_Ritchie-The_C_Programming_Language-RU.pdf)

Table of Contents
Предисловие .................................................................................................................................................................... 8
Предисловие к первому изданию ............................................................................................................................... 10
Введение ........................................................................................................................................................................ 11
1. Обзор языка ............................................................................................................................................................... 14
1.1. Начнем, пожалуй ................................................................................................................................................ 14
1.2. Переменные и арифметические выражения................................................................................................... 16
1.3. Инструкция for .................................................................................................................................................... 21
1.4. Именованные константы ................................................................................................................................... 22
1.5. Ввод-вывод символов........................................................................................................................................ 23
1.5.1. Копирование файла .................................................................................................................................... 23
1.5.2. Подсчет символов ....................................................................................................................................... 25
1.5.3. Подсчет строк .............................................................................................................................................. 26
1.5.4. Подсчет слов ................................................................................................................................................ 27
1.6. Массивы .............................................................................................................................................................. 29
1.7. Функции .............................................................................................................................................................. 31
1.8. Аргументы. Вызов по значению ........................................................................................................................ 33
1.9. Символьные массивы ........................................................................................................................................ 34
1.10. Внешние переменные и область видимости ................................................................................................. 37
2. Типы, операторы и выражения ................................................................................................................................ 41
2.1. Имена переменных ............................................................................................................................................ 41
2.2. Типы и размеры данных .................................................................................................................................... 41
2.3. Константы............................................................................................................................................................ 42
2.4. Объявления ......................................................................................................................................................... 45
2.5. Арифметические операторы ............................................................................................................................. 46
2.6. Операторы отношения и логические операторы ............................................................................................ 46
2.7. Преобразования типов ...................................................................................................................................... 47
2.8. Операторы инкремента и декремента ............................................................................................................. 51
2.9. Побитовые операторы ....................................................................................................................................... 52
2.10. Операторы и выражения присваивания ........................................................................................................ 54
2.11. Условные выражения....................................................................................................................................... 55
2.12. Приоритет и очередность вычислений .......................................................................................................... 56
3. Управление ................................................................................................................................................................ 59
3.1. Инструкции и блоки ........................................................................................................................................... 59
3.2. Конструкция if-else ............................................................................................................................................. 59
3.3. Конструкция else-if ............................................................................................................................................. 60
3.4. Переключатель switch ........................................................................................................................................ 61
3.5. Циклы while и for ................................................................................................................................................ 63
3.6. Цикл do-while ...................................................................................................................................................... 66
3.7. Инструкции break и continue ............................................................................................................................. 67
3.8. Инструкция goto и метки ................................................................................................................................... 68
4. Функции и структура программы............................................................................................................................. 70
4.1. Основные сведения о функциях ....................................................................................................................... 70
4.2. Функции, возвращающие нецелые значения.................................................................................................. 73
4.3. Внешние переменные ....................................................................................................................................... 75
4.4. Области видимости ............................................................................................................................................ 81
4.5. Заголовочные файлы ......................................................................................................................................... 82
4.6. Статические переменные .................................................................................................................................. 84
4.7. Регистровые переменные ................................................................................................................................. 84
4.8. Блочная структура .............................................................................................................................................. 85
4.9. Инициализация .................................................................................................................................................. 86
4.10. Рекурсия ............................................................................................................................................................ 87
4.11. Препроцессор языка Си ................................................................................................................................... 88
4.11.1. Включение файла ...................................................................................................................................... 89
4.11.2. Макроподстановка .................................................................................................................................... 89
4.11.3. Условная компиляция ............................................................................................................................... 91
5. Указатели и массивы ................................................................................................................................................. 93
5.1. Указатели и адреса............................................................................................................................................. 93
5.2. Указатели и аргументы функций....................................................................................................................... 94
5.3. Указатели и массивы .......................................................................................................................................... 96
5.4. Адресная арифметика........................................................................................................................................ 99
5.5. Символьные указатели функции .................................................................................................................... 102
5.6. Массивы указателей, указатели на указатели ............................................................................................... 105
5.7. Многомерные массивы ................................................................................................................................... 108
5.8. Инициализация массивов указателей ............................................................................................................ 110
5.9. Указатели против многомерных массивов .................................................................................................... 110
5.10. Аргументы командной строки ...................................................................................................................... 111
5.11. Указатели на функции .................................................................................................................................... 115
5.12. Сложные объявления .................................................................................................................................... 118
6. Структуры ................................................................................................................................................................. 123
6.1. Основные сведения о структурах ................................................................................................................... 123
6.2. Структуры и функции ....................................................................................................................................... 125
6.3. Массивы структур ............................................................................................................................................. 127
6.4. Указатели на структуры ................................................................................................................................... 131
6.5. Структуры со ссылками на себя ...................................................................................................................... 133
6.6. Просмотр таблиц .............................................................................................................................................. 137
6.7. Средство typedef .............................................................................................................................................. 139
6.8. Объединения .................................................................................................................................................... 141
6.9. Битовые поля .................................................................................................................................................... 142
7. Ввод и вывод ........................................................................................................................................................... 145
7.1. Стандартный ввод-вывод ................................................................................................................................ 145
7.2. Форматный вывод (printf) ............................................................................................................................... 147
7.3. Списки аргументов переменной длины ......................................................................................................... 149
7.4. Форматный ввод (scanf)................................................................................................................................... 150
7.5. Доступ к файлам ............................................................................................................................................... 153
7.6. Управление ошибками (stderr и exit) ............................................................................................................. 156
7.7. Ввод-вывод строк ............................................................................................................................................. 157
7.8. Другие библиотечные функции ...................................................................................................................... 158
7.8.1. Операции со строками .............................................................................................................................. 158
7.8.2. Анализ класса символов и преобразование символов ......................................................................... 159
7.8.3. Функция ungetc .......................................................................................................................................... 159
7.8.4. Исполнение команд операционной системы......................................................................................... 159
7.8.5. Управление памятью ................................................................................................................................ 160
7.8.6. Математические функции ........................................................................................................................ 160
7.8.7. Генератор случайных чисел...................................................................................................................... 161
8. Интерфейс с системой UNIX ................................................................................................................................... 162
8.1. Дескрипторы файлов ....................................................................................................................................... 162
8.2. Нижний уровень ввода-вывода (read и write) ............................................................................................... 163
8.3. Системные вызовы open, creat, close, unlink ................................................................................................. 164
8.4. Произвольный доступ (lseek) .......................................................................................................................... 166
8.5. Пример. Реализация функций fopen и getc ................................................................................................... 167
8.6. Пример. Печать каталогов ............................................................................................................................... 170
8.7. Пример. Распределитель памяти ................................................................................................................... 175
А. Справочное руководство ........................................................................................................................................ 180
А 1. Введение ........................................................................................................................................................... 180
А 2. Соглашения о лексике ..................................................................................................................................... 180
А 2.1. Лексемы (tokens) ....................................................................................................................................... 180
А 2.2. Комментарий ............................................................................................................................................. 180
А 2.3. Идентификаторы ....................................................................................................................................... 180
А 2.4. Ключевые слова ........................................................................................................................................ 181
А 2.5. Константы .................................................................................................................................................. 181
А 2.6. Строковые литералы ................................................................................................................................. 183
A 3. Нотация синтаксиса ......................................................................................................................................... 183
А 4. Что обозначают идентификаторы .................................................................................................................. 184
А 4.1. Класс памяти .............................................................................................................................................. 184
А 4.2. Базовые типы............................................................................................................................................. 184
А 4.3. Производные типы.................................................................................................................................... 185
А 4.4. Квалификаторы типов ............................................................................................................................... 185
А 5. Объекты и Lvalues............................................................................................................................................. 186
А 6. Преобразования ............................................................................................................................................... 186
А 6.1. Целочисленное повышение ..................................................................................................................... 186
А 6.2. Целочисленные преобразования ............................................................................................................ 186
А 6.3. Целые и числа с плавающей точкой ........................................................................................................ 186
А 6.4. Типы с плавающей точкой ........................................................................................................................ 186
А 6.5. Арифметические преобразования .......................................................................................................... 187
А 6.6. Указатели и целые .................................................................................................................................... 187
А 6.7. Тип void ...................................................................................................................................................... 188
А 6.8. Указатели на void ...................................................................................................................................... 188
А 7. Выражения........................................................................................................................................................ 188
А 7.1. Генерация указателя ................................................................................................................................. 189
А 7.2. Первичные выражения ............................................................................................................................. 189
А 7.3. Постфиксные выражения ......................................................................................................................... 190
А 7.4. Унарные операторы .................................................................................................................................. 192
А 7.5. Оператор приведения типа ...................................................................................................................... 193
А 7.6. Мультипликативные операторы .............................................................................................................. 193
А 7.7. Аддитивные операторы............................................................................................................................ 194
А 7.8. Операторы сдвига ..................................................................................................................................... 194
А 7.9. Операторы отношения ............................................................................................................................. 195
А 7.10. Операторы равенства ............................................................................................................................. 195
А 7.11. Оператор побитового И .......................................................................................................................... 195
А 7.12. Оператор побитового исключающего ИЛИ .......................................................................................... 195
А 7.13. Оператор побитового ИЛИ ..................................................................................................................... 196
А 7.14. Оператор логического И ......................................................................................................................... 196
А 7.15. Оператор логического ИЛИ .................................................................................................................... 196
А 7.16. Условный оператор ................................................................................................................................. 196
А 7.17. Выражения присваивания ...................................................................................................................... 197
А 7.18. Оператор запятая .................................................................................................................................... 197
А 7.19. Константные выражения ........................................................................................................................ 197
А 8. Объявления ...................................................................................................................................................... 198
А 8.1. Спецификаторы класса памяти ................................................................................................................ 199
А 8.2. Спецификаторы типа ................................................................................................................................ 199
А 8.3. Объявления структур и объединений ..................................................................................................... 200
A 8.4. Перечисления ............................................................................................................................................ 203
А 8.5. Объявители ................................................................................................................................................ 204
А 8.6. Что означают объявители ......................................................................................................................... 204
А 8.7. Инициализация ......................................................................................................................................... 207
А 8.8. Имена типов .............................................................................................................................................. 209
А 8.9. Объявление typedef .................................................................................................................................. 210
А 8.10. Эквивалентность типов ........................................................................................................................... 210
А 9. Инструкции ....................................................................................................................................................... 211
А 9.1. Помеченные инструкции .......................................................................................................................... 211
А 9.2. Инструкция-выражение ............................................................................................................................ 211
А 9.3. Составная инструкция ............................................................................................................................... 211
А 9.4. Инструкции выбора................................................................................................................................... 212
А 9.5. Циклические инструкции ......................................................................................................................... 213
А 9.6. Инструкции перехода ............................................................................................................................... 213
А 10. Внешние объявления ..................................................................................................................................... 214
А 10.1. Определение функции ........................................................................................................................... 214
А 10.2. Внешние объявления .............................................................................................................................. 215
А 11. Область видимости и связи ........................................................................................................................... 216
А 11.1. Лексическая область видимости ............................................................................................................... 216
А 11.2. Связи......................................................................................................................................................... 217
А 12. Препроцессирование..................................................................................................................................... 217
А 12.1. Трехзнаковые последовательности ...................................................................................................... 218
А 12.2. Склеивание строк .................................................................................................................................... 218
А 12.3. Макроопределение и макрорасширение............................................................................................. 218
А 12.4. Включение файла .................................................................................................................................... 220
А 12.5. Условная компиляция ............................................................................................................................. 221
А 12.6. Нумерация строк ..................................................................................................................................... 222
А 12.7. Генерация сообщения об ошибке ......................................................................................................... 222
А 12.8. Прагма ...................................................................................................................................................... 222
А 12.9. Пустая директива .................................................................................................................................... 222
А 12.10. Заранее определенные имена ............................................................................................................ 223
А 13. Грамматика ..................................................................................................................................................... 223
B. Стандартная библиотека ........................................................................................................................................ 230
В 1. Ввод-вывод: <stdio.h> ...................................................................................................................................... 230
В 1.1. Операции над файлами ............................................................................................................................ 230
В 1.2. Форматный вывод ..................................................................................................................................... 232
В 1.3. Форматный ввод ....................................................................................................................................... 234
В 1.4. Функции ввода-вывода символов ........................................................................................................... 236
В 1.5. Функции прямого ввода-вывода ............................................................................................................. 237
В 1.6. Функции позиционирования файла ........................................................................................................ 237
В 1.7. Функции обработки ошибок .................................................................................................................... 238
В 2. Проверки класса символа: <ctype.h> ............................................................................................................. 238
В 3. Функции, оперирующие со строками: <string. h>.......................................................................................... 239
В 4. Математические функции: <math. h> ............................................................................................................. 240
В 5. Функции общего назначения: <stdlib. h> ....................................................................................................... 242
В 6. Диагностика: <assert. h> .................................................................................................................................. 244
В 7. Списки аргументов переменной длины: <stdarg.h> ..................................................................................... 244
В 8. Дальние переходы: <setjmp. h> ...................................................................................................................... 245
В 9. Сигналы: <signal. h> .......................................................................................................................................... 245
В 10. Функции даты и времени: <time.h> .............................................................................................................. 246
В 11. Зависящие от реализации пределы: <limits.h> и <float.h> ......................................................................... 248
C. Перечень изменений .............................................................................................................................................. 251
