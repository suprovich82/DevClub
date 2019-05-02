#include <stdio.h>

#define N 5

int main() {
    int min, max, mod;
    
    scanf("%d %d", &min, &max);
    
    mod = min % N;
    min -= mod;
    
    if ( mod > 0 ) {
        min += N;
    }
    
    for ( int i = min; i <= max; i += N ) {
        printf("%d\n", i);
    }
    return 0;
}



// #include <stdio.h>

// #define N 5

// int main() {
//     int min, max;
//     int a, b;
    
//     scanf("%d %d", &min, &max);
    
//     a = min % N;
//     b = max % N;
        
//     if ( a <= 0 ) {
//         min = min - a;
//     } else {
//         min = min - a + N;
//     }
//     if ( b < 0 ) {
//         max = max - b - N;
//     } else {
//         max = max - b;
//     }
    
//     for (int i = min; i <= max; i += N) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }
