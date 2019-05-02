#include <stdio.h>

int main() {
    int total, column;
    int element = 0;
    
    scanf("%d", &total);
    
    for ( int row = 1; row <= total; row++ ) {
        for ( column = 1; column < row; column++ ) {
            element += 1;
            printf("%d ", element);
        }
        element += 1;
        printf("%d\n", element);
    }
    return 0;
}
