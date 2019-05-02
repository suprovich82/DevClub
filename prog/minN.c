#include <stdio.h>

int main() {
    int amount, min, number;
    
    scanf("%d %d", &amount, &min);
    
    for ( int i = 2; i <= amount; i++ ) {
        scanf("%d", &number);
        if ( min > number ) {
            min = number;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
