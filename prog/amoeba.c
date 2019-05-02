#include <stdio.h>

#define N 2

int main() {
    int cell, hour;
    
    scanf("%d %d", &cell, &hour);
    for ( int i = 1; i <= hour; i++ ) {
        cell *= N;
        printf("%dh => %d amoeba(s)\n", i, cell);
    }
    return 0;
}
