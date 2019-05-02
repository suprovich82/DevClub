#include <stdio.h>

int gcd(int a, int b) {
    // printf("Call function gcd\n");
    // printf("a = %d : b = %d\n", a, b);
    if ( b == 0 ) {
        // printf("if b == 0 : return %d\n", a);
        return a;
        
    }
    // printf("return gcd (b, a%b) = %d %d\n", b, a%b);
    return gcd (b, a%b);
    
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("lcm = %d\n", lcm(a, b));
    printf("gcd = %d\n", gcd(a, b));
    
    
    return 0;
}


// int gcd(int a, int b) {
//     if ( b == 0 ) {
//         return a;
//     }
//     return gcd (b, a%b);
// }