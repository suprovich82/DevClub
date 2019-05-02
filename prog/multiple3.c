#include <stdio.h>

int main() {
    int limited;
    
    scanf("%d", &limited);
    
    printf("0");
    
    for ( int i = 3; i <= limited; i += 3 ) {
        printf(" %d", i);
    }
    printf("\n");
    
    return 0;
}
