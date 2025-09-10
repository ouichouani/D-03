
// Challenge 6 : Compte des Occurrences d'un Caractère



#include <stdio.h>
#include <string.h>


int main(){

    char str1[20];
    char caractere;
    int char_counter = 0;
    printf("donnez la chain de charactere : ");
    fgets(str1 , 255 , stdin);
    str1[strlen(str1) - 1] = '\0' ;

    printf("donnez un charactere : ");
    scanf("%c" , &caractere);
    str1[strlen(str1) - 1] = '\0' ;

    for(int i = 0 ; i < strlen(str1) ; i++){
        if(str1[i] == caractere) char_counter ++ ;
    }

    printf("le nombre de %c caracter dans cette chaine est : %d" ,caractere ,char_counter);




    return 0 ;
}