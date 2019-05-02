#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char a;
    
    for ( ; fscanf(in, "%c", &a) == 1; ) {
        if ( a >= 'a' && a <= 'z' ) {
            a -= 32;
        }
        fprintf(out, "%c", a);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
