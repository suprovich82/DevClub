#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int len3 = len1 + len2;
    int tmp;
    
    for ( int x = 0; x < len1 - 1; x++ ) {
        for ( int y = x + 1; y < len1; y++ ) {
            if ( src1[x] > src1[y] ) {
                tmp = src1[y];
                src1[y] = src1[x];
                src1[x] = tmp;
            }
        }
    }
    
    for ( int x = 0; x < len2 - 1; x++ ) {
        for ( int y = x + 1; y < len2; y++ ) {
            if ( src2[x] > src2[y] ) {
                tmp = src2[y];
                src2[y] = src2[x];
                src2[x] = tmp;
            }
        }
    }
    
    for ( int i = 0, j = 0, k = 0; k < len3; k++ ) {
        if ( src1[i] < src2[j] && i < len1 ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
}

int main() {
    int len1 = 7;
    int len2 = 9;
    int len3 = len1 + len2;
    int src1[7] = { 7, 6, 5, 4, 3, 2, 1 };
    int src2[9] = { 1, 7, 2, 9, 4, 6, 5, 8, 3 };
    int target[len3];

    for ( int i = 0; i < len1; i++ ) {
        printf("%d ", src1[i]);
        
    }
    printf("\n");
    
    for ( int i = 0; i < len2; i++ ) {
        printf("%d ", src2[i]);
    }
    printf("\n");
    
    arrayMerge(target, src1, len1, src2, len2);
    
    for ( int i = 0; i < len3; i++ ) {
        printf("%d ", target[i]);
    }
    printf("\n");
    
    return 0;
}


//  Написать функцию
// void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

// Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
// Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
// В случае равенства предпочтение отдаётся элементам из первого массива.
// Требуемая сложность: O(N)