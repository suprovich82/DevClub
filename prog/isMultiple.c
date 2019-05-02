#include <stdio.h>

int main() {
    int dividend, divisor;
    
    scanf("%d%u", &dividend, &divisor);
            
    if ( dividend % divisor == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int a;
//     unsigned int b;
    
//     scanf("%d%d", &a, &b);
    
//     if ( a % b == 0 ) {
//         printf("yes\n");
//     } else {
//         printf("no\n");
//     }
    
//     return 0;
// }
