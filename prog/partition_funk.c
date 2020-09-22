int partition(int array[], int start, int end) {
    int pivot;
    int i = start - 1;
    int temp, j;
    
    pivot = (start + end) / 2;
    temp = array[pivot];
    array[pivot] = array[end];
    array[end] = temp;
    pivot = array[end];
    
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

int main() {
    int start = 0;
    int end = 5;
    int len = 6;
    int i;
    int array[] = {  2, 1, 0, 3, 4, 5 };

    
    for ( i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    partition(array, start, end);
    
    for ( i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    
    return 0;
}


// В качестве опорного элемента брать среднее арифметическое между start и end с округлением вниз.

// ==== Input =====
// 6
// 0 5
// 0 1 2 3 4 5
// ==== Result ====
// pivot = 5
// array = 0 1 2 3 4 5
// === Expected ===
// pivot = 2
// array = 0 1 2 3 4 5


// ==== Input =====
// 6
// 0 5
// -5 -4 -3 -2 -1 0
// ==== Result ====
// pivot = 5
// array = -5 -4 -3 -2 -1 0
// === Expected ===
// pivot = 2
// array = -5 -4 -3 -2 -1 0


// ==== Input =====
// 6
// 0 5
// 2 1 0 3 4 5
// ==== Result ====
// pivot = 5
// array = 2 1 0 3 4 5
// === Expected ===
// pivot = 0
// array = 0 1 5 3 4 2


// ==== Input =====
// 6
// 0 5
// 5 4 3 2 1 0
// ==== Result ====
// pivot = 0
// array = 0 4 3 2 1 5
// === Expected ===
// pivot = 3
// array = 0 2 1 3 5 4


// ==== Input =====
// 6
// 0 5
// 1 0 3 2 5 4
// ==== Result ====
// pivot = 4
// array = 1 0 3 2 4 5
// === Expected ===
// pivot = 3
// array = 1 0 2 3 5 4


// ==== Input =====
// 10
// 2 7
// 999 999 0 1 2 3 4 5 999 999
// ==== Result ====
// pivot = 7
// array = 999 999 0 1 2 3 4 5 999 999
// === Expected ===
// pivot = 4
// array = 999 999 0 1 2 3 4 5 999 999

// (test diffs truncated due to length...)