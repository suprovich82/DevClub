#include <stdio.h>

int main() {
    int a, b;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d%d", &a, &b);
    
    fprintf(out, "%d&%d=%d\n", a, b, a&b);
    fprintf(out, "%d|%d=%d\n", a, b, a|b);
    fprintf(out, "%d^%d=%d\n", a, b, a^b);
    fprintf(out, "%d<<%d=%d\n", a, b, a<<b);
    fprintf(out, "%d>>%d=%d\n", a, b, a>>b);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
