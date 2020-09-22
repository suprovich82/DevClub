#include <stdio.h>

int main() {
    int dividend;
    int divisor;
    int mod;
    int whole;
    
    scanf("%d%d", &dividend, &divisor);
    
    mod = dividend % divisor;
    whole = dividend / divisor;
    
    printf("\n mod = %d : whole = %d\n", mod, whole);
    

    return 0;
}
