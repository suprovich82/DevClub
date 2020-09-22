#include <stdio.h>

int main() {
    char array[1] = {'A'};
    
    printf("array[0] = %c\n", array[0]);
    
    array[0] += 32;
    
    printf("array[20] = %c\n", array[0]);
    
    return 0;
}
