#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}


int main() {
    char str1[10]; //{'h','e','l','o'};  
    
    char str2[]= "ololo1  hello"; //{'h','e','l','l','o'};
    
    printf("%d\n", strEqual(str1,str2));





//    for ( int counter = 0; str1[counter] == str2[counter]; counter++ ) {
//        printf("str = %c : str2 = %c \n", str1[counter], str2[counter]);
//            
//        if ( str1[counter] == '\0' && str2[counter] == '\0') {
//       printf("ok \n");
//        return 0;
//        }
//    }
//    printf("error\n");
    
//    return 1; 
    return 0;    
}
