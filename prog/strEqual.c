#include <stdio.h>

#define LIMIT 100

int main() {
    char str1[LIMIT+1];
    char str2[LIMIT+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s\n", str1);
    fscanf(in, "%100s", str2);
    
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            fprintf(out, "yes\n");
            return 0;
        }
    }
    fprintf(out, "no\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
