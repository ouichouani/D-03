
// Challenge 4 : Comparaison de Chaînes



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

    if(strcmp(str1 , str2)){
        printf("les deux chain ne sonne pas egau" );
    }else{
        printf("les deux chain sonne egau" );
    }


    return 0 ;
}