#include <stdio.h>

int main() {
    int sizearray = 1001;
    long long array[sizearray];
    int price, i, j;
    long long farmersQuantity, amountNeeded;
    long long minPrice = 0;
    long long price1, amount=0;
    FILE *in = fopen("task.in.max", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( i = 0; i < sizearray; i++ ) {
        array[i] = 0;
    }
    
    fscanf(in, "%lld %lld\n", &farmersQuantity, &amountNeeded);
    
    for ( i = 1; i <= farmersQuantity && fscanf(in, "%lld %d\n", &amount, &price) != EOF; i++ ) {
        if ( price <= 1000 ) {
            array[price] += amount;
        }
    }
    
    for ( int k = 1; amountNeeded != 0 && k < sizearray; k++ ) {
        amount = array[k];
        if ( amount > 0 ) {
            printf("array[%d] = %lld\n", k, amount);
        }
        
        if ( amount != 0 ) {
            if ( amount < amountNeeded ) {
                amountNeeded -= amount;
                price1 = k * amount;
            } else { 
                price1 = amountNeeded * k;
                amountNeeded = 0;
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