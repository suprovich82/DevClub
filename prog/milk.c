#include <stdio.h>

int main() {
    int sizearray = 1001;
    int array[sizearray];
    int amount, price, i, j;
    long long farmersQuantity, amountNeeded;
    long long minPrice = 0;
    long long price1;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( i = 0; i < sizearray; i++ ) {
        array[i] = 0;
    }
    
    fscanf(in, "%lld %lld\n", &farmersQuantity, &amountNeeded);
    
    for ( i = 0, j = 1; fscanf(in, "%d %d\n", &amount, &price) != EOF; i += 2, j += 2 ) {
        if ( j % 2 != 0 && price <= 1000 ) {
            array[price] += amount;
        }
    }
    
    for ( int k = 1; k <= i; k++ ) {
        if ( amountNeeded != 0 && array[k] != 0 ) {
            if ( array[k] != 0 && array[k] <= amountNeeded ) {
                amountNeeded -= array[k];
                price1 = k * array[k];
            } else {
                price1 = amountNeeded * k;
                amountNeeded -= amountNeeded;
            }
            minPrice += price1;
        }
    }
    
    if ( amountNeeded != 0 ) {
        minPrice = 0;
    }
    fprintf(out, "%lld\n", minPrice);
    fclose(in);
    fclose(out);
    return 0;
}


// Условие задачи
// Молочная компания каждый день покупает молоко у фермеров. 
// У каждого из <farmerQuantity> фермеров есть <amount> литров молока по цене <price>. 
// Найти минимальную стоимость <minPrice>, за которую возможно приобрести <amountNeeded> литров молока. 
// В случае, если у фермеров недостаточно молока, вывести в качестве <minPrice> значение 0.

// В файле task.in заданы целые числа:
// <farmerQuantity> <amountNeeded>
// <amount1> <price1>
// <amount2> <price2>
// .....
// <amountN> <priceN>

// Вывести minPrice в task.out.

// Ограничения:
// 0 <= farmerQuantity <= 100 000 000
// 0 <= amountNeeded <= 300 000 000
// 0 <= amount <= 300 000 000
// 1 <= price <= 1 000

// Пример ввода
// 3 10
// 5 1
// 8 2
// 8 3
// Пример вывода
// 15