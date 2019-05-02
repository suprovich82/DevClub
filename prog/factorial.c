#include <stdio.h>

int main() {
    int limit;
    int factorial = 1;
    
    scanf("%d", &limit);
    
    if ( limit < 0 ) {
        printf("-1\n");
    } else {
        for ( int i = 1; i <= limit; i++ ) {
        factorial = factorial * i;
        }
        printf("%d\n", factorial);
    }
    return 0;
}



// #include <stdio.h>

// int main() {
//     int limit;
//     int factorial = 1;
    
//     scanf("%d", &limit);
    
//     if ( limit < 0 ) {
//         printf("-1\n");
//         return 0;
//     }
    
//     for ( int i = 1; i <= limit; i++ ) {
//         factorial = factorial * i;
//     }
//     printf("%d\n", factorial);
    
//     return 0;
// }
