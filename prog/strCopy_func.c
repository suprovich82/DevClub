#include <stdio.h>

void strCopy(char target[], char source[]) {
    int element = 0;
    
    for ( ; source[element] != '\0'; element++ ) {
        target[element] = source[element];
    }
    target[element] = '\0';
}



int main() {
    char target[1];
    char source[] = {' ','\0'};
    int j;
    
    for (int i = 0; source[i] != '\0'; i++) {
        printf("%c ", source[i]);
    }
    printf("\n");
    
    strCopy(target, source);  

    for ( int x = 0; target[x] != '\0'; x++ ) {
        printf("%c", target[x]);
        printf("%d ", x);
    }
    printf("\n");
    
   return 0;
    
}

