#include <stdio.h>

int factorial(int n) {
    if ( n >= 2 ) {
        return factorial(n-1) * n; 
    } else if ( n < 0 ) {
        return -1;
    }
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);
        
    printf("%d\n", factorial(n));
    
    return 0;
}
