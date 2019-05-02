#include <stdio.h>

int average(int a, int b) {
    int max, min;
    int point = 0;
    
    max = a;
    min = b;
    if ( a < 0 ) {
        point = 1;
    }
    if ( b < 0 ) {
        point = 2;
    }
    
    // printf("max a = %d : min b = %d\n", max, min);
    if ( max < b ) {
        max = b;
        min = a; 
        printf("if_1 - min a = %d : max b = %d\n", min, max);    
    }
    
    if ( max % 2 == 0 ) {
        printf("max целое число\n");
        if ( max < 0 ) {
            max += 1;
            min -= 1;
            printf("if_2 (max < 0) : max += 1 = %d : min -= 1 = %d\n", max, min);
        } else {
            max -= 1;
            min += 1;
            printf("else (max >= 0) : max -= 1 = %d : min += 1 = %d\n", max, min);
        }
    }
    printf("return = %d\n", ((min%2)+(max%2))/2+min/2+max/2);
        
    return ((min % 2) + (max % 2)) / 2 + min / 2 + max / 2;
}

int main() {
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    // printf("a = %d : b = %d\n", a, b);
    // int max, min;
    
    // max = a;
    // min = b;
    // if ( max < min ) {
    //     max = b;
    //     min = a;
    // }
    
    // if ( max % 2 == 0 ) {
    //     if ( max < 0 ) {
    //         max += 1;
    //         min -= 1;
    //     } else {
    //         max -= 1;
    //         min += 1;
    //     }
    // }    
        
    printf("%d\n", average(a, b));

    return 0;
    
}
