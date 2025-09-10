
// Challenge 2 : Structure avec Tableau

#include <stdio.h>



struct etudiant
{
    char nom[255];
    char prenom[255];
    int note[3];

};

int main(){

    struct etudiant etudiant ;

    printf("donne le nom de person : ");
    scanf("%s", &etudiant.nom );

    printf("donne le prenom de person : ");
    scanf("%s", &etudiant.prenom );

    printf("donne la 1er note : ");
    scanf("%d", &etudiant.note[0] );

    printf("donne la 2eme note : ");
    scanf("%d", &etudiant.note[1] );

    printf("donne la 3eme note : ");
    scanf("%d", &etudiant.note[2] );
    
    printf("- nom : %s\n" , etudiant.nom);
    printf("- prenom : %s\n" , etudiant.prenom);
    printf("- note 1 : %d\n" , etudiant.note[0]);
    printf("- note 2 : %d\n" , etudiant.note[1]);
    printf("- note 3 : %d\n" , etudiant.note[2]);


    return 0;
}
