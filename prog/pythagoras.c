#include <stdio.h>

void symbol(int number, char symb) {
    for ( int a = 0; a < number; a++ ) {
        printf("%c", symb);
    }
}

int size_number(long long size) {
    int counter = 0;
    
    if ( size <= 0 ) {
        size *= -1;
        counter += 1;
    }
    for ( ; size > 0; size /= 10 ) {
        counter += 1;
    }
    return counter;
}

void print_element(long long number, int width) {
    int a = width - size_number(number);
    
    symbol(a, ' ');
    printf("%lli", number);
}

int main() {
    long long min_column, max_column, min_row, max_row;
    int size_column, num_of_column;
    int total_size_column, tital_size_column;
    int size_max_max, size_max_min, size_min_max, size_min_min, size_min_row, size_max_row;
    
    scanf("%lli %lli %lli %lli", &min_column, &max_column, &min_row, &max_row);
    
    size_max_max = size_number(max_row*max_column);
    size_max_min = size_number(max_row*min_column);
    size_min_max = size_number(min_row*max_column);
    size_min_min = size_number(min_row*min_column);
    size_min_row = size_number(min_row) + 1;
    size_max_row = size_number(max_row) + 1;
    
    size_column = size_max_max;
    
    if ( size_column < size_max_min ) {
        size_column = size_max_min;
    }
    if ( size_column < size_min_max ) {
        size_column = size_min_max;
    }
    if ( size_column < size_min_min ) {
        size_column = size_min_min;
    }
    
    size_column += 1;
    
    if ( size_min_row < size_max_row ) {
        tital_size_column = size_max_row;
    } else {
        tital_size_column = size_min_row;
    }
    
    symbol(tital_size_column+1, ' ');
    printf("|");
    
    for ( long long j = min_column; j <= max_column; j++ ) {
        print_element(j, size_column);
    }
    printf("\n");
    
    num_of_column = max_column - min_column + 1;
    total_size_column = num_of_column * size_column;
    
    symbol(tital_size_column+1, '-');
    printf("+");
    symbol(total_size_column, '-');
    printf("\n");
    
    for ( long long i = min_row; i <= max_row; i++ ) {
        print_element(i, tital_size_column);
        printf(" |");
        for ( long long j = min_column; j <= max_column; j++ ) {
            print_element(i*j, size_column);
        }
        printf("\n");
    }
    return 0;
}
