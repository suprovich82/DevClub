#include <stdio.h>

int main() {
    int amount, max, number;
    
    scanf("%d %d", &amount, &max);
    
    for ( int i = 2; i <= amount; i++ ) {
        scanf("%d", &number);
        if ( max < number ) {
            max = number;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
