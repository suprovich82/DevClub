#include <stdio.h>

void printnum(int number) {
    if ( number > 9 ) {
        printf("%c", 55+number);
    } else {
        printf("%d", number);
    }
}

void recur(int dividend, int divisor) {
    int mod, whole;
    
    mod = dividend % divisor;
    whole = dividend / divisor;
    
    if ( whole < divisor ) {
        if ( whole == 0 ) {
            printnum(mod);
        } else {
            printnum(whole);
            printnum(mod);
        } 
    } else {
        dividend = whole;
        recur(dividend, divisor);
        printnum(mod);
    }
}

int main() {
    int dividend, divisor;
    
    scanf("%d%d", &dividend, &divisor);
    
    if ( dividend < 0 ) {
        dividend *= -1;
        printf("-");
    }
    
    recur(dividend, divisor);
    printf("\n");
    
    return 0;
}


// test4 - 28/29