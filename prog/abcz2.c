#include <stdio.h>

int main() {
    int a;
    int flag = 0;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        printf("alpha\n");
        flag = 1;
    }
    if ( a % 3 == 0 ) {
        printf("bravo\n");
        flag = 1;
    }
    if ( a % 5 == 0 ) {
        printf("charlie\n");
    } else if ( flag == 0 ) {
        printf("zulu\n");
    }
    
    return 0;
}
