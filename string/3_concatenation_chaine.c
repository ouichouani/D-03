
// Challenge 3 : Concaténation de Chaînes



#include <stdio.h>
#include <string.h>


int main(){

    char str1[255];
    char str2[255];
    printf("donne la 1er chain de charactere : ");
    fgets(str1 , 255 , stdin);
    str1[strlen(str1) - 1] = '\0' ;

    printf("donne la 2eme chain de charactere : ");
    fgets(str2 , 255 , stdin);
    str2[strlen(str2) - 1] = '\0' ;

    printf("la concatination de ces deux chaine est : %s" ,strcat(str1, str2) );

    return 0 ;
}