#include <stdio.h>

int main() {
    int day;
    
    scanf("%d", &day);
    
    if ( day == 366 ) {
        printf("yes\n");
    } else if ( day == 365 ) {
        printf("no\n");
    } else if ( day != 366 && day != 365 ) {
        printf("Invalid param\n");
    }
    
    return 0;
}
