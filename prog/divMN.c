#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int min, max;
    int m, n, y, lcm;
    
    scanf("%d%d%d%d", &min, &max, &m, &n);
    
    lcm = m * n / gcd(m, n);
    y = min % lcm;
    
    if ( y > 0 ) {
        min = min - y + lcm;
    } else if ( y < 0 ) {
        min = min - y;
    }
    for ( ; min <= max; min += lcm ) {
        printf("%d\n", min);
    }
    return 0;
}
