#include <stdio.h>

int partition(int array[], int start, int end) {
    int pivot = array[end];
    int i = start - 1;
    int temp, j;
    
    for ( j = start; j <= end - 1; j++ ) {
        if ( array[j] <= pivot ) {
            i += 1;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    temp = array[i+1];
    array[i+1] = array[j];
    array[j] = temp;
    
    return i + 1;
}

void quickSort(int array[], int start, int end) {
    if ( start < end ) {
        int pi = partition(array, start, end);
        
        quickSort(array, start, pi-1);
        quickSort(array, pi+1, end);
    }
}

int main() {
    int start = 0;
    int end = 1000;
    int array[end];
    int len, i;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d\n", &len);
    
    for ( i = 0; i < len; i++ ) {
        fscanf(in, "%d ", &array[i]);
    }
    end = len - 1;
    
    quickSort(array, start, end);
    
    for ( i = 0; i < end; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[i]);
    
    fclose(in);
    fclose(out);
    
    return 0;
}


// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм quickSort.
// Результат записать в task.out