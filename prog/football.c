#include <stdio.h>

int main() {
    unsigned int a, b;
    
    scanf("%u%u", &a, &b);
    
    if ( a > b ) {
        printf("Home team wins\n");
    } else if ( a == b ) {
        printf("Draw\n");
    } else {
        printf("Away team wins\n");
    }
    
    return 0;
}
