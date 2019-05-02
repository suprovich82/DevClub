#include <stdio.h>

int main() {
    int max, divisor;
    
    scanf("%d %d", &max, &divisor);
    max -= max % divisor;
    
    if (divisor < 0 ) {
        divisor *= -1;
    }
    
    for ( int i = 0; i < max; i += divisor ) {
        printf("%d ", i);
    }
    
    printf("%d\n", max);
    return 0;
}






// #include <stdio.h>

// int main() {
//     int max=0, divisor;
    
//     printf("%d", max);
    
//     scanf("%d %d", &max, &divisor);
    
//     if ( divisor > 0 ) {
//         for ( int i = divisor; i <= max; i += divisor ) {
//             printf(" %d", i);
//         }
//     }
//     printf("\n");
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int max, divisor;
//     int i;
    
//     scanf("%d %d", &max, &divisor);
    
//     if ( divisor < 0 ) {
//         divisor *= -1;
//     }
    
//     printf("0");
    
//     for (i = divisor; i <= max; i += divisor ) {
//         printf(" %d", i);
//     }
//     printf("\n");
    
//     return 0;
// }
