#include <stdio.h>

void strRot13(char str[]) {
    for ( int i = 0; str[i] != '\0'; i++ ) {
        int elem = str[i];
        
        if ( elem >= 97 && elem <= 122 ) {
            elem += 13;
            
            if ( elem > 122 ) {
                elem -= 26; // 26 = 122-97+1 (range length)
            }
        } else if ( elem >= 65 && elem <= 90 ) {
            elem += 13;
            
            if ( elem > 90 ) {
                elem -= 26; // 26 = 90-65+1 (range length)
            }
        }
        str[i] = elem;
    }
}



int main() {
    char str[100];// = {' ','#','9','/','}','{','o','\0'};
    
    scanf("%s", &str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
    
    strRot13(str);
    
    for ( int i = 0; str[i] != '\0'; i++ ) {
        printf("%c ", str[i]);
    }
    printf("\n");

return 0;
    
}
