// #include <stdio.h>

// int main() {
//     unsigned int a;
    
//     scanf("%u", &a);
    
//     for ( int i = 1; i <= a; i *= 2 ) {
//         if ( i == a ) {
//             printf("yes\n");
//             return 0;
//         }
//     }
//     printf("no\n");
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     unsigned int a;
    
//     scanf("%u", &a);
    
//     while ( a % 2 == 0 ) {
//         a = a / 2;
//     }
//     ( a == 1 ) ? printf("yes\n") : printf ("no\n");
    
//     return 0;
// }



#include <stdio.h>

int main() {
    unsigned int a;
    
    scanf("%u", &a);
    
    for ( ; a % 2 == 0; a /= 2); 
    if ( a == 1 ) {
        printf("yes\n");
    } else {
    printf("no\n");
    }
    return 0;
}
