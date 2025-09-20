
// Challenge 8 : Conversion en Minuscules


#include <stdio.h>
#include <string.h>


int main(){

    char str1[255];
    
    printf("donnez la chain de charactere : ");
    fgets(str1 , 255 , stdin);
    str1[strlen(str1) - 1] = '\0' ;


    for(int i = 0 ; i < strlen(str1) ; i++){
        if(str1[i] != ' ' && str1[i] < 90  ){
            str1[i] += 32;
        }
    }

    printf("votre chain en majescul est : %s ", str1);

    // printf("[%d - %d]", 'A' , 'Z');
    // printf("[%d - %d]", 'a' , 'z');


    return 0 ;
}