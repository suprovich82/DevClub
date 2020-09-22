#include <stdio.h>

int main() {
    int needle;
    int index;
    int flag = -1;
    int limit = 100;
    int array[limit];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d\n", &needle);
    
    for ( index = 0; index < limit; index++ ) {
        if ( fscanf(in, "%d", &array[index]) == 1 ) {
            if ( array[index] == needle ) {
                fprintf(out, "%d\n", index);
                flag = 0;
            }
        }
    }
    
    if ( flag == -1 ) {
        fprintf(out, "%d\n", flag);
    }
    fclose(in);
    fclose(out);
    
    return 0;
}





//В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
//Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

//Пример ввода
//40
//10 20 30 40 50 60 70 80 90 100
//Пример вывода
//3