#include <stdio.h>

void pointerIncrement(int *value) {
    *value += 1;
}

int main() {
    int a;
    a = 45;
    
    pointerIncrement(&a);
    
    printf("%d\n", a);
    
    return 0;
}


// #include <stdio.h>

// void pointerIncrement(int *value1, int *value2) {
//     *value1 += 1;
//     *value2 += 2;
// }

// int main() {
//     int a, b;
//     a = 45;
//     b = 5;
    
//     pointerIncrement(&a,&b);
    
//     printf("%d  %d\n", a, b);
    
//     return 0;
// }




