#include <stdio.h>

int main() {
    int dividend, divisor, limit;
    
    scanf("%d %d", &dividend, &divisor);
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    limit = dividend - dividend % divisor;
    
    if ( limit > dividend ) {
        printf("%d\n", limit-divisor);
    } else {
        printf("%d\n", limit);
    }
    return 0;
}




// WRONG LOGIC
// #include <stdio.h>

// int main() {
//     int dividend, divisor;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     dividend = dividend - (dividend % divisor);
    
//     if ( dividend >= 0 ) {
//         printf("%d\n", dividend);
//     } else {
//         dividend = dividend - divisor;
//         printf("%d\n", dividend);
//     }
    
//     return 0;
// }
