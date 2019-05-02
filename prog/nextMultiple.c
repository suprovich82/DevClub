#include <stdio.h>

int main() {
    int dividend, divisor, mod;
    
    scanf("%d %d", &dividend, &divisor);
    mod = dividend % divisor;
    dividend = dividend - mod;
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }  
    if ( mod > 0 ) {
        printf("%d\n", dividend+divisor);
    } else {
        printf("%d\n", dividend);
    }
    return 0;
}

        
//         printf("\n");
//     }
    
//     printf("%d\n", dividend);
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int max, divisor;
      
//     scanf("%d %d", &max, &divisor);
    
//     max -= max % divisor;
    
//     if (divisor < 0 ) {
//         divisor *= -1;
//     }
    
//     for ( int i = 0; i < max; i += divisor ) {
//         printf("%d ", i);
//     }
    
//     printf("%d\n", max);
    
//     return 0;
// }
