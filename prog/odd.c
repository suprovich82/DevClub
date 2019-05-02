#include <stdio.h>

int main() {
    int odd, i;
    
    scanf("%d", &odd);
    
    printf("1");
    
    for ( i = 3; i <= odd; i += 2 ) {
        printf(" %d", i);
    }
    printf("\n");
    
    return 0;
}
