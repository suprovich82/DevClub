#include <stdio.h>

int main() {
    int a;
    
    for ( int i = 1; i <= 5; i++ ) {
        scanf("%d", &a);
        if ( a == 1488 ) {
            printf("accepted\n");
            return 0;
        } else {
            printf("incorrect password\n");
        }
    }
    printf("denied\n");
    
    return 0;
}
