#include <stdio.h>

#define LIMIT 100

void strRot13(char str[]) {
    for ( int i = 0; str[i] != '\0'; i++ ) {
        int elem = str[i];
        
        if ( elem >= 97 && elem <= 122 ) {
            elem += 13;
            
            if ( elem > 122 ) {
                elem -= 26;
            }
        } else if ( elem >= 65 && elem <= 90 ) {
            elem += 13;
            
            if ( elem > 90 ) {
                elem -= 26;
            }
        }
        str[i] = elem;
    }
}

int main() {
    char str[LIMIT+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);
    
    strRot13(str);
    
    for ( int i = 0; str[i] != '\0'; i++ ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    return 0;
}
