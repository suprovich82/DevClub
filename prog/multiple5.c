#include <stdio.h>

int main() {
    int limited;
    
    scanf("%d", &limited);
    
    printf("0");
    
    for ( int i = 5; i <= limited; i += 5 ) {
        printf(" %d", i);
    }
    printf("\n");
    
    return 0;
}
