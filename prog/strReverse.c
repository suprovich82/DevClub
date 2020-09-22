#include <stdio.h>

#define MAXLINE 100

int main() {
    char strReverse[MAXLINE+1];
    int line, counter;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", strReverse);
    
    for ( line = 0; strReverse[line] != '\0'; line++ );
    
    for ( counter = line - 1; counter >= 0; counter-- ) {
        fprintf(out, "%c", strReverse[counter]);
    }
    
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
