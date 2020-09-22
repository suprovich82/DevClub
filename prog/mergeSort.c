#include <stdio.h>

void merge(int array[], int low, int middle, int high) {
    int helper[high];
    int i = low;
    int j = middle + 1;
    int k = low;
    
    for ( int i = low; i <= high; i++ ) {
        helper[i] = array[i];
    }
    
    for ( ; i <= middle && j <= high; ) {
        if ( helper[i] <= helper[j] ) {
            array[k] = helper[i];
            i += 1;
        } else {
            array[k] = helper[j];
            j += 1;
        }
        k += 1;
    }
    for ( ; i <= middle; ) {
        array[k] = helper[i];
        k += 1;
        i += 1;
    }
}

void mergeSort(int array[], int low, int high) {
    if ( low < high ) {
        int middle = low + (high - low) / 2;
        
        mergeSort(array, low, middle);
        
        mergeSort(array, middle+1, high);
        
        merge(array, low, middle, high);
    }
}

int main() {
    int len = 100;
    int low = 0;
    int high;
    int array[len];
    int i;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d\n", &len);
    
    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d ", &array[i]);
    }
    high = len - 1;
    
    mergeSort(array, low, high);
    
    for ( i = 0; i < high; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[i]);
    
    fclose(in);
    fclose(out);
    
    return 0;
}



// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм mergeSort.
// Результат записать в task.out
// Допустимо использование рекурсии.