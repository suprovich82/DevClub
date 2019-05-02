#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int x, y, c;
    
    scanf("%d %d", &x, &y);
    
    c = sum (x, y);
    printf("%d\n", c);
        
    // printf("%d\n", sum (x, y));
    
    return 0;
}
