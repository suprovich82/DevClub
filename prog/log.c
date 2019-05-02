// #include <stdio.h>

// int main() {
//     int a, b;
    
//     scanf("%d%d", &a, &b);       
    
//     if ( a == 1 && b == 1) {
//         printf("%d AND %d is 1\n", a, b);
//     } else {
//         printf("%d AND %d is 0\n", a, b);
         
//     }
//     if ( a == 0 && b == 0 ) {
//         printf("%d OR %d is 0", a, b);
//     } else {
//         printf("%d OR %d is 1\n", a, b);
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d%d", &a, &b);       
    
    printf("%d AND %d is %d\n", a, b, a&&b);

    printf("%d OR %d is %d\n", a, b, a||b);
    
    return 0;
}

// printf("%d AND %d is %d\n", a, b, a>b);
// printf("%d OR %d is %d\n", a, b, a<b);
