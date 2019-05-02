#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char letters;
    
    for ( ; fscanf(in, "%c", &letters) == 1; ) {
        if ( letters >= 'A' && letters <= 'Z' ) {
            letters += 32;
        }
        fprintf(out, "%c", letters);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
