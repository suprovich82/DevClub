#include <stdio.h>

// int fibonacci(int limit, n) {
//     if ( n >= 0 && n < 2 ) {
//         return n;
//     } else if ( n < 0 ) {
//         return fibonacci(n+2) - fibonacci(n+1);
//     } else {
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }

int main() {
    int maxJump;
    int cell;
    unsign long long
    // int ways = 0;
    
    // FILE *in = fopen("task.in", "r");
    // FILE *out = fopen("task.out", "w");
    scanf("%d%d", &maxJump, &cell);
    // fscanf(in, "%d%d", &maxJump, &cell);

    
    for ( int i = 1, jump = i; i < maxJump; i++ ) {
        jump *= 2;
        printf("jump = %d : index = %d\n", jump);
    }
    int waysF = 0;
    int limit = cell;
    
    for ( int j = 1; j <= maxJump; j++ ) {
            waysF += limit - j;
            printf("waysF = %d\n", waysF);
    }
    // fclose(in);
    // fclose(out);
    return 0;
}




// Условие задачи
// Кузнечик начинает свой путь на клетке 0 и может прыгать на расстояние от 1 до <maxJump> клеток. Прыжки возможны только на целое число клеток вперед.
// Посчитать кол-во способов <ways>, которыми кузнечик может попасть на клетку <cell>.

// В файле task.in заданы целые числа:
// <maxJump> <cell>

// Вывести ways в task.out.

// Ограничения:
// 1 <= maxJump <= 100
// 1 <= cell <= 100
// 1 <= ways <= 999 999 999 999 999 999

// Пример ввода
// 2 3
// Пример вывода
// 3
// Пояснение
// Кузнечик может прыгать на 1 или 2 клетки.
// На 1-ю клетку он может попасть одним способом: 0->1.
// На 2-ю клетку он может попасть двумя способами: 0->2, 0->1->2.
// На 3-ю клетку можно попасть тремя способами: 0->1->2->3, 0->1->3, 0->2->3.




// #include <stdio.h>

// int main() {
//     int maxJump;
//     int jump = 1;
//     int cell, cell1;
//     int ways = 0; // int ways = 1;
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
    
//     fscanf(in, "%d%d", &maxJump, &cell);
    
//     cell1 = cell;
    
//     if ( maxJump > 100 || maxJump < 0 ) {
//         return 1;
//     }
//     if ( cell > 100 || cell < 0 ) {
//         return 1;
//     }
//     if ( maxJump == cell ) {
//         if ( 1 <= ways || ways <= 999999999999999999 ) {
//             fprintf(out, "%d\n", ways);
//             return 0;
//         }
//     }
//     if ( cell == jump ) {
//         if ( 1 <= ways || ways <= 999999999999999999 ) {
//             fprintf(out, "%d\n", ways);
//             return 0;
//         }
//     }
//     for ( int i = 0; i < cell; i++ ) {
//         if ( cell1 % maxJump == 0 ) {
//             ways += 1;
//         }
//         cell1 -= jump;
//     }
//     if ( 1 <= ways || ways <= 999999999999999999 ) {
//         ways *= 2 + 1; // ways *= 2; - (4/20)
//         fprintf(out, "%d\n", ways);
//     } else {
//         return 1;
//     }
    
//     fclose(in);
//     fclose(out);
//     return 0;
// }

// Читы:
// - реализация задачи hopper не содержит ни одного if'a
// - в реализации задачи hopper return встречается только 1 раз
// - в реализации задачи hopper fscanf вызывается только 1 раз
// - в реализации задачи hopper fprintf вызывается только 1 раз

// Последовательность действий для трудоголиков:
// - считать maxJump и cell
// - произвести расчет для отрезка массива от 0 до maxJump
// - произвести расчет для отрезка массива от maxJump до cell
// - вывести результат
// - PROFIT

// Последовательность действий для программистов:
// - найти в интернетах комбинаторную формулу для этой задачи (или вывести ее, это не настолько сложно)
// - запрограммировать формулу и избежать выделения MAX_CELL ячеек памяти и длительных расчетов
// - PROFIT

// Спасибо за внимание