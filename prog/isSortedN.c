#include <stdio.h>

int main() {
    int max, a, b;
    int flag = 0;
    
    scanf("%d %d", &max, &a);
    
    for ( int i = 1; i < max; i++ ) {
        scanf("%d", &b);
        if ( a > b ) {
            flag = 1;
        }
        a = b;
    }
    if ( flag == 1 ) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    return 0;
}
