// #include <stdio.h>

// int number( int x ) {
//     return ( x >= 1000000 && x <= 9999999);
// }
// int number1( int y ) {
//     return ( y >= 100 && y <= 999);
// }
// int number2( int z) {
//     return ( z == 101 || z == 102 || z == 103 || z == 104 || z == 112);
// }

// int main() {
//     int a, b;
//     const c = 1;
//     const d = 40;
    
//     scanf("%d%d", &a, &b);
     
//     if ( number(a) == 1 ) {
//         printf("%d\n", b*c);
//     } else if ( number1(a) == 1 ) {
//         if ( number2(a) == 1 ) {
//         printf("0\n");
//         } else {
//             printf("%d\n", b*d);
//         }
//     } else {
//         printf("-1\n");
//     }
           
//     return 0;
// }




#include <stdio.h>

int main() {
    int phone, minute;
    
    scanf("%d%d", &phone, &minute);
    
    if ( phone >= 1000000 && phone <= 9999999 ) {
        printf("%d$\n", minute*1);
    } else if ( phone == 101 || phone == 102 || phone == 103 || phone == 104 || phone == 112 ) {
        printf("0$\n");
    } else if ( phone >= 100 && phone <= 999 ) {
        printf("%d$\n", minute*40); 
    } else {
        printf("-1\n");
    }
    
    return 0;
}
