#include <stdio.h>


void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int targetIndex, len1Index, len2Index;
    
    for ( len1Index = 0, len2Index = 0, targetIndex = 0; len1Index < len1 && len2Index < len2; targetIndex++ ) {
        if ( src1[len1Index] <= src2[len2Index] ) {
            target[targetIndex] = src1[len1Index];
            len1Index += 1;
        } else {
            target[targetIndex] = src2[len2Index];
            len2Index += 1;
        }
    }
    for ( ; len1Index < len1; targetIndex++ ) {
        target[targetIndex] = src1[len1Index];
        len1Index += 1;
    }
    for ( ; len2Index < len2; targetIndex++ ) {
        target[targetIndex] = src2[len2Index];
        len2Index += 1;
    }
}


int main() {
    int target[18]; 
    int src2[] = {2,3,10,4,6,9};
    int len2 = 6;
    int src1[] = {0,1,10,3,4,7,7,8,10, 11, 12, 12};
    int len1 = 12;
    int last = 17;
    
    arrayMerge(target, src1, len1, src2, len2);
        
    for (int i = 0; i < len1-1; i++) {
        printf("%d ", src1[i]);
    }
    printf("%d\n", src1[len1-1]);
    
    for (int i = 0; i < len2-1; i++) {
        printf("%d ", src2[i]);
    }
    printf("%d\n", src2[len2-1]);
    
    printf("\n");
    
    for (int i = 0; i < last; i++) {
        printf("%d ", target[i]);
    }
    printf("%d\n", target[last]);
    
    return 0;
}


//  Написать функцию
// void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

// Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
// Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
// В случае равенства предпочтение отдаётся элементам из первого массива.
// Требуемая сложность: O(N)