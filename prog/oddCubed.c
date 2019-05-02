#include <stdio.h>

int main() {
    int min, max, a;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( int i = min; i < max; i += 2 ) {
        a = i * i * i;
        printf("%d ", a);
    }
    max = max * max * max;
    printf("%d\n", max);
    
    return 0;
}
