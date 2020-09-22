#include <stdio.h>

int main() {
    int number, col_elem, point;
    int col1 = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( col_elem = 0; fscanf(in, "%1d", &number) != EOF; col_elem++ ) {
        col1 += number;
    }
    
    if ( col1 == 0 ) {
        fprintf(out, "%d\n", col1);
        return 0;
    }
    
    point = col_elem - col1;
    
    rewind(in);
    col1 = 0;
    
    for ( int count = 0; fscanf(in, "%1d", &number) != EOF && count < point; count++ ) {
        col1 += number;
    }
    
    fprintf(out, "%d\n", col1);
    fclose(in);
    fclose(out);
    return 0;
}


// Задача binarySequence
// В файле task.in дана последовательность символов – нулей и единиц.
// Вывести в task.out минимально необходимое число обменов пар значений для упорядочивания 
// последовательности по неубыванию.

// Пример ввода
// 1101
// Пример вывода
// 1
// Пояснение
// Необходимо обменять ноль с первой единицей.

