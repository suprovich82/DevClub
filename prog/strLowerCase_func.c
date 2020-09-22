#include <stdio.h>

void strLowerCase(char str[]) {
    for ( int i = 0, temp = str[i]; temp != '\0'; i++, temp = str[i] ) {
        if ( temp >= 'A' && temp <= 'Z' ) {
            str[i] += 32;
        }
    }
}

int main() {
    int UpperCase;
    char str[] = "wOrlD !";
    
    for ( int i = 0; str[i] != '\0'; i++ ) {
        printf("%c ", str[i]);
    }
    printf("\n\n");
    
    strUpperCase(str);
    
    for ( int i = 0; str[i] != '\0'; i++ ) {
        printf("%c ", str[i]);
    }
    printf("\n");
    
    return 0;
}
