#include <stdio.h>

int main() {
    int sequence_length;
    int number;
    int constant = 42;
    
    scanf("%d", &sequence_length);
    
    for ( int i = 0; i < sequence_length; i++ ) {
        scanf("%d", &number);
        printf("%d\n", constant^number);
    }
    
    return 0;
}
