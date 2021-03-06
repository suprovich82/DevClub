#include <stdio.h>

int fibonacci(int n) {
    if ( n >= 0 && n < 2 ) {
        return n;
    } else if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    
    int a;
    
    printf("insert the number : ");
    
    scanf("%d", &a);
    
    printf("\n fibonacci = %d \n", fibonacci(a));
    
    return 0;
}
//------------------------
//n   …   −10 −9  −8  −7  −6  −5  −4  −3  −2  −1  0   1   2   3   4   5   6   7   8   9   10  …
//Fn  …   −55 34 −21  13  −8   5  −3   2  −1   1  0   1   1   2   3   5   8  13  21  34   55  …
//-------------------------
//Последовательность чисел Фибоначчи определяется формулой 
//Fn = Fn-1 + Fn-2 . 
//То есть, следующее число получается как сумма двух предыдущих.
//--------------------------
//Иногда числа Фибоначчи рассматривают и для отрицательных значений n, 
//как двусторонне бесконечную последовательность, удовлетворяющую тому же рекуррентному соотношению. 
//При этом члены с отрицательными индексами легко получить с помощью эквивалентной формулы «назад»: 
//Fn = Fn+2 - Fn+1.
//--------------------------

//Условие задачи
//int fibonacci(int n)
//Использовать рекурсию.

//#include <stdio.h>

//int fibonacci(int n) {
//            return -1 * fibonacci(n);
//        }
 //       return fibonacci(n);
//    }
 //   return fibonacci(n-1) + fibonacci(n-2);
