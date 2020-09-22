#include <stdio.h>

int fibonacci(int n) {
    int fib;
    int fib1 = 0;
    int fib2 = 1;
    int minus = 0;
    
    if ( n < 0 ) {
        minus += 1;
        n *= -1;
    }
    
    for ( int i = 1; i < n; i++ ) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    
    if ( minus > 0 ) {
        if ( n % 2 == 0 ) {
            fib *= -1;
        }
    }
    return fib;
}

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a > 46 || a < -46 ) {
        return 1;
    } else if ( a == 0 ) {
        printf("0\n");
    } else if ( a == 1 ) {
        printf("1\n");
    } else if ( a == -1 ) {
        printf("1\n");
    } else {
        printf("%d\n", fibonacci(a));
    }
    return 0;
}



// Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
// Пример ввода
// 8
// Пример вывода
// 21

// n   …   −10 −9   −8  −7  −6  −5  −4  −3  −2  −1  0   1   2   3   4   5   6   7   8   9   10  …
// Fb      −55 34  −21  13  −8   5  −3   2  −1   1  0   1   1   2   3   5   8   13  21  34  55  …