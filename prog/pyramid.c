#include <stdio.h>

int main() {
    int total, row, cols, element;
    
    scanf("%d %d %d", &total, &row, &cols);
    
    if ( row < cols ) {
        row = cols;
    }
    for ( int line = row + 1; line <= total; line++ ) {
        for ( element = cols + 1; element < line; element++ ) {
            printf("%d ", element);
        }
        printf("%d\n", element);
    }
    return 0;
}
