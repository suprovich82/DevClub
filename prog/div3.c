#include <stdio.h>

#define N 3

int main() {
    int min, max, mod;
    
    scanf("%d %d", &min, &max);
    
    mod = min % N;
    min = min - mod;
    
    if ( mod > 0 ) {
        min = min + N;
    }
    
    for ( int i = min; i <= max; i += N ) {
        printf("%d\n", i);
    }
    return 0;
}

// #include <stdio.h>

// #define N 3

// int main() {
//     int min, max, modN;
    
//     scanf("%d %d", &min, &max);
    
//     modN = min % N;
    
//     if ( min < 0 ) {
//     min = min - modN;
//     }
    
//     if ( min > 0 && modN !=0  ) {
//          min = min - modN + N;
//     }
     
//     for ( int i = min; i <= max; i += N ) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }