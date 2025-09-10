
// Challenge 5 : Inversion de Chaîne



#include <stdio.h>
#include <string.h>


int main(){

    char str1[20];
    printf("donnez la chain de charactere : ");
    fgets(str1 , 255 , stdin);
    str1[strlen(str1) - 1] = '\0' ;

    // for(int i = 0 ; i < strlen(str1) ; i++){
    //         printf("%c" , str1[strlen(str1) - 1 - i] );
    // }

    for(int i = strlen(str1) - 1 ; i >= 0 ; i--){
            printf("%c" , str1[i] );
    }


    return 0 ;
}