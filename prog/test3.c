#include <stdio.h>

int isReducible(int numenator, int denumenator) {
    int a = denumenator / 2;
    
    for ( int x = 2; x <= a; x++ ) {
        if ( denumenator % x == 0 && numenator % a == 0 ) {
            return 1;
        }
    }
    return 0;
}

double printNext(double lastPrinted, int max_denum) {
    double min_num = 1;
    int min_numenator, min_denumenator;
    double a;
    double numenator_d, denumenator_d;
    
    for ( int numenator = 1; numenator < max_denum; numenator++ ) {
        for ( int denumenator = max_denum; denumenator > 1; denumenator-- ) {
            numenator_d = numenator;
            denumenator_d = denumenator;
            a = numenator_d / denumenator_d;
            if ( a > lastPrinted && a < min_num && isReducible(numenator, denumenator) == 0 ) {
                min_num = a;
                min_numenator = numenator;
                min_denumenator = denumenator;
            }
        }
    }
    if ( min_num == 1 ) {
        return 2;
    }
    printf("%d/%d ", min_numenator, min_denumenator);
    return min_num;
}

int main() {
    int max_denum, denumenator, numenator;
    double lastPrinted = 0;
    
    scanf("%d", &max_denum);
    
    if ( max_denum <= 200 ) {
        printf("0/1 ");
        
        for ( numenator = 1; numenator < max_denum; numenator++ ) {
            for ( denumenator = max_denum; denumenator > 0; denumenator-- ) {
                lastPrinted = printNext(lastPrinted, max_denum);
                if ( lastPrinted > 1 ) {
                    numenator = max_denum;
                    denumenator = 0;
                }
            }
        }
        printf("1/1\n");
    }
    return 0;
}
