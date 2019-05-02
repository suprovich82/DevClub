#include <stdio.h>

int main() {
    long plain1, encrypted1, plain2, encrypted2, length;
    long keyA, keyB, number, plain;
    
    scanf("%li %li %li %li", &plain1, &encrypted1, &plain2, &encrypted2);
    
    keyA = (encrypted1 - encrypted2) / (plain1 - plain2);
    keyB = encrypted1 - plain1 * keyA;
    
    if ( plain1 * keyA + keyB == encrypted1 && (plain2 * keyA) + keyB == encrypted2 ) {
        scanf("%li", &length);
        
        for ( int i = 0; i < length; i++ ) {
            scanf("%li", &number);
            plain = (number - keyB) / keyA;
            if ( i < length - 1 ) {
                printf("%li ", plain);
            }
        }
        printf("%li\n", plain);
    }
    return 0;
}
