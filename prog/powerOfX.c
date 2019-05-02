#include <stdio.h>

int main() {
    int base; 
    int power;
    int result = 1;
    
    scanf("%d %d", &base, &power);
    
    for ( int i = 0; i < power; i++ ) {
        printf("%d ", result);
        result *= base;
    }
    printf("%d\n", result);
    
    return 0;
}
