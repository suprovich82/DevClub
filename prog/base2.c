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




//Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления 
//(целое число от 2 до 36).
//Вывести в консоль число, записанное в новой системе счисления.
//В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
//Для решения можно пользоваться только циклами. Задача решается без массивов. 
//Использовать только тип int.

//Пример ввода
//-255 16
//Пример вывода
//-FF

#include <stdio.h>

int pwr(int number, int power) {
    int result = 1;
    
    for ( int i = 1; i <= power; i++ ) {
        result *= number;
    }
    return result;
}

int main() {
    int number10, base;
    int maxPower = 0;
    
    scanf("%d %d", &number10, &base);
    
    if ( number10 < 0 ) {
        number10 *= -1;
        printf("-");
    }
    
    for ( int dividend = number10/base; dividend > 0; dividend /= base ) {
        maxPower += 1;
    }
    
    for ( int power = maxPower; power >= 0; power-- ) {
        int basepower = pwr(base, power);
        int digit = number10 / basepower;
        
        if ( digit < 10 ) {
            printf("%d", digit);
        } else {
            printf("%c", 55+digit);
        }
        number10 %= basepower;
    }
    printf("\n");
    
    return 0;
}