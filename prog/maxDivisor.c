#include <stdio.h>

int main() {
    unsigned int a;
    int max = 0;
    
    scanf("%u", &a);
    
    for ( int i = 2; i < a; i++ ) {
        if ( a % i == 0 ) {
            max = i;
        }
    }
    printf("%d\n", max);
    
    return 0;
}


// #include <stdio.h>

// int main() {
//     unsigned int a;
//     int max = 0;
    
//     scanf("%u", &a);
    
//     for ( int i = 2; i < a/2; i++ ) {
//         if ( a % i == 0 ) {
//             printf("%d\n", a/i);
//             return 0;
//         }
//     }
//     printf("%d\n", max);
    
//     return 0;
// }
