#include <stdio.h>

int main() {
    int a, b, c, d;
    int max;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    if ( a > b ) {
        max = a;
    } else {
        max = b;
    }
    if ( max < c ) {
        max = c;
    } 
    if ( max < d) {
        max = d;
        printf("%d\n", max);
    } else {
        printf("%d\n", max);
    }
    
    return 0;
}
