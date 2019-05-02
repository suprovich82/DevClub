#include <stdio.h>

int max2(int x, int y) {
    if ( x > y ) {
        return x;
    }
    return y;
}

int main() {
    int x, y, c;
    
    scanf("%d %d", &x, &y);
    
    c = max2 (x, y);
    
    printf("%d\n", c);
        
    // printf("%d\n", sum (x, y));
    
    return 0;
}
