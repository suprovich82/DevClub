#include <stdio.h>

int main() {
    int square;
    
    scanf("%d", &square);
    
    for ( int quantity = 1; quantity <= square; quantity++ ) {
        for ( int line = 1; line < square; line++ ) {
            printf("%d ", line);
        }
        printf("%d\n", square);
    }
    return 0;
}
