#include <stdio.h>

int strLen(char str[]) {
    int strLen;
    
    for ( strLen = 0; str[strLen] != 0; strLen++ );
    return strLen;
}

int main() {
    char str[]= {'h','e','l','l','o'};
    int Len = 0;

    
       
    for (int i = 0; str[i] != 0; i++ ) {
            Len = i;       
    }
    
    printf("**\n");
    printf("strlen = %d\n", Len);
    
    
    


   return 0;
    
}

