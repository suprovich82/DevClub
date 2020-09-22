#include <stdio.h> 

int main() {
    int symbol=26;
    int alfabet[symbol];
    char letter;
    int i, j, k;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( i = 0; i < symbol; i++ ) {
        alfabet[i] = 0;
    }
    
    for ( i = 0; fscanf(in, "%c", &letter) == 1; i++ ) {
        if ( letter >= 'A' && letter <= 'Z' ) {
            letter += 32;
        }
        
        if ( letter >= 'a' && letter <= 'z' ) {
           for ( j = 97, k = 0; j <= 122; j++, k++ ) {
              if ( j == letter ) {
                    alfabet[k] += 1;
                }
            }
        }
    }
    
    for ( int b = 97, c = 0 ; b <= 122; b++, c++ ) {
        if ( alfabet[c] > 0 ) {
            fprintf(out, "%c %d\n", b, alfabet[c]);
        }
    }
    
    fclose(in);
    fclose(out);
    return 0; 
}
  
