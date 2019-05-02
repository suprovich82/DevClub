#include <stdio.h>

#define N 2

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % N != 0 ) {
        min += 1;
    }
    for ( int i = min; i <= max; i += N ) {
        printf("%d\n", i);
    }
    return 0;
}
