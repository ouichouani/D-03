// Challenge 2 : Longueur de la Chaîne



#include <stdio.h>
#include <string.h>


int main(){

    char str[255];
    printf("donne une chain de charactere : ");
    fgets(str , 255 , stdin);
    str[strlen(str) - 1] = '\0' ;

    printf("votre chaine est : %s" ,str );
    printf("st sa lengueur est : %d charachter" ,strlen(str) );

    return 0 ;
}