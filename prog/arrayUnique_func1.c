#include <stdio.h>

void arrayUnique(int array[], int size) {
    int len = 1;
    
    for (int i = 0; i < size-1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    for ( int n = 0; n < size ; n++ ) {
        printf("%d ", array[n]);    
    }
    printf("\n");
    
    for ( int i = 1; i < size; i++ ) {        
        printf( "i-1 = %d : i = %d \n", i-1, i );
        printf( "array[i-1] = %d : array[i] = %d \n", array[i-1], array[i] );
       
        if ( array[i-1] < array[i] ) {
            len++;
        }  
    }
    printf("len = %d\n", len);

    // for ( int i = 0, j = 1; i < size; i++, j++ ) {        
    //     printf( "i = %d : j = %d \n", i, j );
    //     printf( "array[j] = %d : array[i] = %d \n", array[j], array[i] );
       
    //     if ( array[i] < array[j] || j >= size ) {
    //         len++;
    //     }  
    // }
    // printf("len = %d\n", len);    
    
} 


int main() {
    // int array[26] = { 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 4, 3, 2, 1 };
    // int size = 26;
    // int array[12] = { 1, 7, 1, 2, 2, 6, 3, 3, 4, 4, 5, 5 };
    // int size = 12;
    // int array[6] = { 1, 2, 3, 3, 3, 6 };
    // int size = 6;
    // int array[3] = { 1, 1, 1 };
    // int size = 3;
    int array[15] = { 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1 };
    int size = 15; 
    // int array[9] = { 1, -1, -2, 2, 3, -3, 3, 4, -4 };
    // int size = 9;
    
    for (int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    arrayUnique(array, size);
    
    // for (int n = 0; n < size; n++ ) {
    //     printf("*%d ", bufferarray[n]);
    // }
    // printf("\n");
    
    return 0;
}

// ____________________________
// Условие задачи
// Написать функцию:
// int arrayUnique(int array[], int size)
// Удалить из массива дубликаты элементов. Вернуть новую длину массива.

// Примечание: пример ввода и вывода показан для лучшего понимания условия задачи. Выводить результат на печать не нужно.

// Пример ввода
// 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 5 4 3 2 1
// Пример вывода
// array = 1 2 3 4 5 6 7 8 9 10
// len = 10

// тренер -
// из вот такова массива
// 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5
// должно получиться что-то вроде

// 1 2 3 4 5 - 1 2 3 4 5 1 2 3 4 5 (красное обрезано новой длинной и ГЛАВНОЕ ни в этом ни в других массивах нас не интересует измениться ли последовательность элементов в НЕНУЖНОЙ нам части)

// а из такого

// 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3

// такое
// 1 2 3 1 1 1 1 2 2 2 2 3 3 3 3

// а вот в таком случае...

// 1 1 1 1 1 3 3 3 3 3 2 2 2 2 2

// думаю ты попробуешь найти ответ самостоятельно ведь у нас не сортировка, а уникальность