// #include <stdio.h>

// int main() {
//     int a;
    
//     scanf("%d", &a);
        
//     if ( a % 2 == 0 ) {
//         printf("%d\n", a);
//     } else {
//         printf("%d\n", a+1);
//         } 
    
//     return 0;
// }


#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 != 0 ) {
        a += 1;
    } 
    printf("%d\n", a);
    
    return 0;
}