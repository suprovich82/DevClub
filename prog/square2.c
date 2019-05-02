#include <stdio.h>

int main() {
    int square, row, column;
    int element = 0;
    
    scanf("%d", &square);
    
    for ( row = 1; row <= square; row++ ) {
        for ( column = 1; column < square; column++ ) {
            element += 1;
            printf("%d ", element);
        }
        element += 1;
        printf("%d\n", element);
    }
    return 0;
}








// #include <stdio.h>

// int main() {
//     int square, a, element;
    
//     scanf("%d", &square);
    
//     a = square * square;
    
//     for ( element = 1; element <= a; element++ ) {
//         if ( element % square == 0 ) {
//             printf("%d\n", element);
//         } else {
//             printf("%d ", element);
//         }
//     }
//     return 0;
    
// }
