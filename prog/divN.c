#include <stdio.h>

int main() {
    int min, max, divisor, mod;
    
    scanf("%d %d %d", &min, &max, &divisor);
    mod = min % divisor;
    min = min - mod;
    
    if ( mod > 0 ) {
        min = min + divisor;
    }
    
    for ( int i = min; i <= max; i += divisor ) {
        printf("%d\n", i);
    }
    return 0;
}
