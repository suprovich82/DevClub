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
    int counter, func, limit;
    
    scanf("%d", &counter);
    
    if ( counter < 1 ) {
        printf("-1\n");
        return 0;
    }
    limit = 3;
    for ( int i = 2; i < limit; i++ ) {
        func = isPrime(i);
        if ( func == 1 ) {
            counter -= 1;
        }
        if ( counter == 0 ) {
            printf("%d\n", i);
            limit = i;
        }
        limit += 1;
    }
    return 0;
}
