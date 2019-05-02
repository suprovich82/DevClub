// #include <stdio.h>

// int main() {
//     int total, element, line;
    
//     scanf("%d", &total);
    
//     for ( line = total; line > 0; line-- ) {
//         for ( element = 1; element < line; element++ ) {
//             printf("%d ", element);
//         }
//         printf("%d\n", element);
//     }
//     return 0;
// }




#include <stdio.h>

int main() {
    int total, element;
    
    scanf("%d", &total);
    
    for ( int line = total; line > 0; line-- ) {
        for ( element = 1; element < line; element++ ) {
            printf("%d ", element);
        }
        printf("%d\n", element);
    }
    return 0;
}
