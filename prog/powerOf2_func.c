#include <stdio.h>

int powerOf2(int exponent) {
    return 1 << exponent;
}
    
int main() {
    int exponent;
    
    scanf("%d", &exponent);
        
    printf("%d\n", powerOf2(exponent));
    
    return 0;
}



// рекурсия степени 2
// #include <stdio.h>

// #define N 2

// int powerOf2(int exponent) {
    
//     if ( exponent == 0 ) {
//         return 1;
//     }
//     return  powerOf2(exponent-1) * N;
// }

// int main() {
//     int exponent;
    
//     scanf("%d", &exponent);
        
//     printf("%d\n", powerOf2(exponent));
    
//     return 0;
// }
