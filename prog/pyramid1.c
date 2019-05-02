#include <stdio.h>

int main() {
    int total, line;
    
    scanf("%d", &total);
    
    for ( int element = 1; element <= total; element++ ) {
        for ( line = 1; line < element; line++ ) {
            printf("%d ", line);
        }
        printf("%d\n", line);
    }
    return 0;
}
