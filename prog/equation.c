#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a < 0 ) {
        printf("0\n");
    } else if ( a > 0 ) {
        printf("2\n");
    } else {
        printf("1\n");
    }
    
    return 0;
}
