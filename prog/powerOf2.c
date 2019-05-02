#include <stdio.h>

#define N 2

int main() {
    int power;
    int result = 1;
    
    scanf("%d", &power);
    
    for ( int i = 0; i < power; i++ ) {
        printf("%d ", result);
        result *= N;
    }
    printf("%d\n", result);
    
    return 0;
}
