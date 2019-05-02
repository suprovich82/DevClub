#include <stdio.h>

#define LIMIT 100

int main() {
    int a;
    int counter = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int i = 0; i < LIMIT; i++ ) {
        if ( fscanf(in, "%d", &a) == 1 ) {
            counter += 1;
        } else {
            i = LIMIT;
        }
    }
    fprintf(out, "%d\n", counter);
    fclose(in);
    fclose(out);
    
    return 0;
}


// epic win
// #include <stdio.h>

// #define LIMIT 100

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int len = 0;
    
//     for ( int x; len < LIMIT && fscanf(in, "%d", &x) == 1; len++ );
//     fclose(in);
    
//     fprintf(out, "%d\n", len);
//     fclose(out);
    
//     return 0;
// }
