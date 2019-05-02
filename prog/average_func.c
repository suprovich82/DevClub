#include <stdio.h>

unsigned int average(unsigned int a, unsigned int b) {
    return ((a % 2) + (b % 2)) / 2 + a / 2 + b / 2;
}


int main() {
    unsigned int x, y;
    
    // scanf("%u %u", &x, &y);
    for ( x = 0; x < 6; x++) {
        for ( y = 0; y < 6; y++) {
            printf("x = %u : y = %u : result = %u\n", x, y, average(x, y));
        }
    }
    
   
    return 0;
}
