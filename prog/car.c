#include <stdio.h>

int main() {
    int speed, speedlimit;
    
    scanf("%d%d", &speed, &speedlimit);
    
    if ( speed <= speedlimit ) {
        printf("ok\n");
    } else {
        printf("violation\n");
    }
    
    return 0;
}
