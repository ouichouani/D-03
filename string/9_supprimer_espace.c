
// Challenge 8 : Conversion en Minuscules


#include <stdio.h>
#include <string.h>


int main(){

    char str1[255];
    
    printf("donnez la chain de charactere : ");
    fgets(str1 , 255 , stdin);
    str1[strlen(str1) - 1] = '\0' ;


    for(int i = 0 ; i < strlen(str1) ; i++){
        if(str1[i] == ' ' ){
            for(int j = i ; j < strlen(str1) -1  ; j++){
                str1[j] = str1[j + 1];  
            }
            str1[strlen(str1)-1] = '\0';
        }
    }

    printf("votre chain sens espace est : \"%s\" ", str1);

    return 0 ;
}