#include <stdio.h>

long long gcd(long long a, long long b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    long long a, b;
    long long lcm;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%lli %lli", &a, &b);
    
    lcm = a * b / gcd(a, b);
    
    fprintf(out, "%lli\n", lcm);
    fclose(in);
    fclose(out);
    
    return 0;
}




// #include <stdio.h>

// int main() {
//     int a, b, y;
//     int min, max;
//     int lcm;
    
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
    
//     fscanf(in, "%d%d", &a, &b);
    
//     min = a;
//     max = b;
    
//     if ( a > b ) {
//         min = b;
//         max = a;
//     }
//     y = min * max;
    
//     for ( int i = 1; i < y; i++ ) {
//         lcm = max * i;
//         if ( lcm % min == 0 ) {
//             fprintf(out, "%d\n", lcm);
//             y = i;
//         }
//     }
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }
