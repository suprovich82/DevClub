#include <stdio.h>

int main() {
    unsigned int value;
    
    scanf("%u", &value);
    
    for ( ; value > 0; value-- ) {
        printf("%d ", value);
    }
    printf("0\n");
    
    return 0;
}


// #include <stdio.h>

// int main() {
//     unsigned int a;
    
//     scanf("%u", &a);
    
//     for ( int i = 0; i <= a+1; i++) {
//         printf("%d ", a-2);
//     }
         
//     return 0;
// }