#include <stdio.h>

#define LEN 100

int main() {
    int strlen = 0;
    char mem[LEN+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", mem);
    
    for ( int i = 0; mem[i] != '\0'; i++ ) {
        strlen = i + 1;
    }
    
    fprintf(out, "%d\n", strlen);
    
    fclose(in);
    fclose(out);
    
    return 0;
}

// sizeof(имя_массива)/sizeof(тип_элементов)

//В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
//Прочитать строку в память и подсчитать ее длину.
//Результат вывести в task.out.