#include <stdio.h>

int func(int divident, int divizor) {
    printf("divident = %d : divizor = %d\n\n", divident, divizor);
    
    int whole = divident / divizor;
    int module = divident % divizor;
    
    printf("whole = %d : module = %d\n", whole, module);
    
    //int mod = module;
    //printf("mod = %d \n", module);
    
    if ( whole == 0 ) {
        printf("mod0 = %d\n", module);
        return 1;
    }
    printf("mod = %d\n", module);
    return func(whole, divizor);
}
    
int main() {
    int whole; // целое число от деления
    int module; // остаток от деления после целого числа
    int divident, divizor; // делитель, делимое
    
    scanf("%d%d", &divident, &divizor);
    
    func(divident, divizor);
    //printf("%d\n", divident/divizor);
    
    //printf("whole = %d : module = %d\n", whole, module);
    
    return 0;
}
