#include <stdio.h>

int isPrime(int n) {
    if ( n <= 1 ) {
        return 0;
    }
    
    for ( int i = 2; i <= n / 2; i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}
    
int main() {
    int x, y=55;
    
    for (int i = 1; i < 50; i++ ) {
        x = i;
        y = isPrime (x);
    printf("x = %d y = %d\n", x, y);
    }
    // scanf("%d", &x);
    
    
    
    return 0;
}
