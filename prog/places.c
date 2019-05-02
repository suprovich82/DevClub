#include <stdio.h>

int main() {
    int input;
    int counter = 1;
    
    scanf("%d", &input);
    
    if ( input < 0 ) {
        input *= -1;
        counter += 1;
    }
    
    for ( ; input > 9; input /= 10 ) {
        counter += 1;
    }
    
    printf("%d\n", counter);
    
    return 0;
}
  