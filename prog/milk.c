#include <stdio.h>

int minCount(int arrayPrice[], int size) {
    int min = 0;
    
    for ( int j = 1; j < size; j++ ) {
        if ( arrayPrice[j] != 'a' && arrayPrice[j] < arrayPrice[min] ) {
            min = j;
        }
    }
    return min;
}

int main() {
    int sizearray = 100000000;
    long long farmersQuantity;
    long long amountNeeded;
    long arrayAmount[sizearray];
    int arrayPrice[sizearray];
    unsigned long minPrice = 0;
    unsigned long price1;
    int size, min;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%lld %lld\n", &farmersQuantity, &amountNeeded);
    
    for ( size = 0; fscanf(in, "%li %d\n", &arrayAmount[size], &arrayPrice[size]) != EOF; size++ ) {
        if ( arrayPrice[size] > 1000 ) {
            arrayPrice[size] = 'a';
            arrayAmount[size] = 'a';
        }
    }
    for ( int i = 0; i < farmersQuantity; i++ ) {
        if ( amountNeeded != 0 ) {
            min = minCount(arrayPrice, size);
            
            if ( arrayAmount[min] < amountNeeded ) {
                amountNeeded = amountNeeded - arrayAmount[min];
                price1 = arrayAmount[min] * arrayPrice[min];
                arrayAmount[min] = 'a';
                arrayPrice[min] = 'a';
            } else {
                price1 = amountNeeded * arrayPrice[min];
                amountNeeded -= amountNeeded;
                arrayAmount[min] = 'a';
                arrayPrice[min] = 'a';
            }
            minPrice += price1;
        }
    }
    
    if ( amountNeeded != 0 ) {
        minPrice = 0;
    }
    fprintf(out, "%lu\n", minPrice);
    fclose(in);
    fclose(out);
    return 0;
}
