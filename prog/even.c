#include <stdio.h>

int main() {
    int even;
    
    scanf("%d", &even);
    printf("0");
    
    for ( int i = 2; i <= even; i += 2 ) {
        printf(" %d", i);
    }
    printf("\n");
    
    return 0;
}
