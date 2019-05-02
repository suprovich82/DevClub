#include <stdio.h>

int main() {
    int member, step, sum;
    
    scanf("%d %d %d", &member, &step, &sum);
    
    for ( int i = 1; i < sum; i++ ) {
        printf("%d ", member) ;
        member += step;
    }
    printf("%d\n", member);
    return 0;
}
