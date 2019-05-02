#include <stdio.h>

int main() {
    
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    int a, b;
    
    fscanf(in, "%d%d", &a, &b);
    
    fprintf(out, "1&1=%d\n", a&b);
    fprintf(out, "1|1=%d\n", a|b);
    fprintf(out, "1^1=%d\n", a^b);
    fprintf(out, "1<<1=%d\n", a<<b);
    fprintf(out, "1>>1=%d\n", a>>b);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
