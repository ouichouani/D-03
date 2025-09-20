
//Challenge 1 : Définition et Utilisation de Structure

#include <stdio.h>


struct personne
{
    char nom[255];
    char prenom[255];
    int age ;
        
};

int main(){

    struct personne persone ;

    printf("donne le nom de person : ");
    scanf("%s", &persone.nom );

    printf("donne le prenom de person : ");
    scanf("%s", &persone.prenom );

    printf("donne l\'age de person : ");
    scanf("%d", &persone.age );

    printf("- nom : %s\n" , persone.nom);
    printf("- prenom : %s\n" , persone.prenom);
    printf("- age : %d\n" , persone.age);


    return 0;
}
