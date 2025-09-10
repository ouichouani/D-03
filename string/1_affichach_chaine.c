// Challenge 1 : Affichage d'une Chaîne



#include <stdio.h>

int main(){

    char str[255];
    printf("donne une chain de charactere : ");
    fgets(str , 255 , stdin);

    printf("votre chaine est : %s" ,str );

    return 0 ;
}