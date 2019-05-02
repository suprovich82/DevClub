#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char letters;
 
 
 
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
