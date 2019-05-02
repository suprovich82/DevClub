#include <stdio.h>

int main() {
    int total, column, row, max;
    
    scanf("%d", &total);
    
    max = (total * total + total) / 2;
    
    for ( row = total; row > 0; row-- ) {
        for ( column = row - 1; column > 0; column-- ) {
            printf("%d ", max-column);
        }
        printf("%d\n", max);
        max -= row;
    }
    return 0;
}
