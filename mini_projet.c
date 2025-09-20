#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// DECLARATION DE STRUCTEUR
struct contact
{
    char name[255];
    char phone_number[255];
    char email[255];
};

void menu(int contact_counter)
{
    printf("+---------------------------------------------------------------+\n");
    printf("|1.ajouter un contact                                           |\n");
    printf("|2.modifier un contact                                          |\n");
    printf("|3.supprimer un contact                                         |\n");
    printf("|4.aficher tous les contact                                     |\n");
    printf("|5.recherch par un contact                                      |\n");
    printf("+---------------------------------------------------------------+\n\n");
}

int search_for_contact(int contact_counter, struct contact list_contact[])
{
    // job :return the index of the terget contact
    char nom_de_recherch[255];

<<<<<<< HEAD
    printf("donne le nom de contact : ") ;
    fgets(list_contact[contact_counter].name , 255 , stdin );

    printf("donne le numero de telephon de contact : ") ;
    fgets(list_contact[contact_counter].phone_number , 255 , stdin );

    printf("donne l\'email de contact : ") ;
    fgets(list_contact[contact_counter].email , 255 , stdin );

    contact_counter ++ ;

}

void edit_contact(){
    
    int contact_name[255] ;
    getchar() ;
    printf("donne le nom de contact : ") ;
    fgets( contact_name , 255 , stdin );

    
}

void delete_contact(){}

void show_all_contact(struct contact list_contact[] , int contact_counter){
    
    printf("+---------------------------------------------------------------+\n") ;
    
    for(int i = 0 ; i < contact_counter + 1 ; i++){
        
        printf("name  : %s" , list_contact[i].name ) ;
        printf("phone : %s" , list_contact[i].phone_number ) ;
        printf("email : %s" , list_contact[i].email ) ;
        printf("+---------------------------------------------------------------+\n") ;
=======
    printf("donne le nom de contact : ");
    fgets(nom_de_recherch, 255, stdin);
    nom_de_recherch[strlen(nom_de_recherch) - 1] = '\0';
>>>>>>> 8f14e0279f0e77ae09f6c7df22f9c4e58335e96d

    for (int i = 0; i < contact_counter; i++)
    {
        if (strcmp(nom_de_recherch, list_contact[i].name) == 0)
        {
            return i;
        }
        if (i == contact_counter - 1)
        {
            return -1;
        }
    }
}

void afficher_un_contact(int contact_counter, struct contact list_contact[])
{
    if (!contact_counter)
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|pas de contact exist                                           |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("clicker sur \'entrer\' pour retourner au menu");
        getchar();

        return;
    }
    printf("+---------------------------------------------------------------+\n");
    printf("|recherch par un contact                                        |\n");
    printf("+---------------------------------------------------------------+\n\n");

    int index = search_for_contact(contact_counter, list_contact);
    if (index >= 0)
    {
        printf("+---------------------------------------------------------------+\n");
        printf("name  : %s\n", list_contact[index].name);
        printf("phone : %s\n", list_contact[index].phone_number);
        printf("email : %s\n", list_contact[index].email);
        printf("+---------------------------------------------------------------+\n");
    }
    else
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|le contact n'est pas trouver                                   |\n");
        printf("+---------------------------------------------------------------+\n\n");
    }

    printf("clicker sur \'entrer\' pour retourner au menu");
    getchar();
}

void add_contact(int contact_counter, struct contact list_contact[])
{

    printf("+---------------------------------------------------------------+\n");
    printf("|1.ajouter un contact                                           |\n");
    printf("+---------------------------------------------------------------+\n\n");

    printf("donne le nom de contact : ");
    fgets(list_contact[contact_counter].name, 255, stdin);

    list_contact[contact_counter].name[strlen(list_contact[contact_counter].name) - 1] = '\0';

    printf("donne le numero de telephon de contact : ");
    fgets(list_contact[contact_counter].phone_number, 255, stdin);
    list_contact[contact_counter].phone_number[strlen(list_contact[contact_counter].phone_number) - 1] = '\0';

    printf("donne l\'email de contact : ");
    fgets(list_contact[contact_counter].email, 255, stdin);
    list_contact[contact_counter].email[strlen(list_contact[contact_counter].email) - 1] = '\0';

    printf("+---------------------------------------------------------------+\n");
    printf("|contact a ete ajouter avec success                             |\n");
    printf("+---------------------------------------------------------------+\n\n");

    printf("clicker sur \'entrer\' pour retourner au menu ");
    getchar();
}

void show_all_contact(int contact_counter, struct contact list_contact[])
{

    if (!contact_counter)
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|pas de contact exist                                           |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("clicker sur \'entrer\' pour retourner au menu");
        getchar();

        return;
    }

    for (int i = 0; i < contact_counter; i++)
    {
        printf("+---------------------------------------------------------------+\n");
        printf("name  : %s\n", list_contact[i].name);
        printf("phone : %s\n", list_contact[i].phone_number);
        printf("email : %s\n", list_contact[i].email);
        printf("+---------------------------------------------------------------+\n");
    }

    printf("clicker sur \'entrer\' pour retourner au menu");
    getchar();
}

void edit_contact(int contact_counter, struct contact list_contact[])
{

    if (!contact_counter)
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|pas de contact exist                                           |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("clicker sur \'entrer\' pour retourner au menu");
        getchar();

        return;
    }

    printf("+---------------------------------------------------------------+\n");
    printf("|2.modifier d\'un contact                                       |\n");
    printf("+---------------------------------------------------------------+\n\n");

    int index = search_for_contact(contact_counter, list_contact);
    if (index >= 0)
    {

        printf("donne le neveau numero de contact : ");
        fgets(list_contact[index].phone_number, 255, stdin);
        list_contact[index].phone_number[strlen(list_contact[index].phone_number) - 1] = '\0';

        printf("donne le neveau email de contact : ");
        fgets(list_contact[index].email, 255, stdin);
        list_contact[index].email[strlen(list_contact[index].email) - 1] = '\0';
    }
    else
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|le contact n'est pas trouver                                   |\n");
        printf("+---------------------------------------------------------------+\n\n");
    }

    printf("+---------------------------------------------------------------+\n");
    printf("|le contact a ete mise a joure avec success                     |\n");
    printf("+---------------------------------------------------------------+\n\n");

    printf("clicker sur \'entrer\' pour retourner au menu ");
    getchar();
}

void delete_contact(int *contact_counter, struct contact list_contact[])
{

    if (! *contact_counter)
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|pas de contact exist                                           |\n");
        printf("+---------------------------------------------------------------+\n\n");

        printf("clicker sur \'entrer\' pour retourner au menu");
        getchar();

        return;
    }

    printf("+---------------------------------------------------------------+\n");
    printf("|3.supprimer un contacti                                        |\n");
    printf("+---------------------------------------------------------------+\n\n");

    int index = search_for_contact(*contact_counter, list_contact);

    if (index >= 0)
    {
        for (int i = index; i < *contact_counter; i++)
        {
            strcpy(list_contact[i].name, list_contact[i + 1].name);
            strcpy(list_contact[i].phone_number, list_contact[i + 1].phone_number);
            strcpy(list_contact[i].email, list_contact[i + 1].email);
        }
        *contact_counter -= 1;

        printf("+---------------------------------------------------------------+\n");
        printf("|le contact a ete supprimer avec success                        |\n");
        printf("+---------------------------------------------------------------+\n\n");
    }
    else
    {
        printf("+---------------------------------------------------------------+\n");
        printf("|le contact n'est pas trouver                                   |\n");
        printf("+---------------------------------------------------------------+\n\n");
    }

    printf("clicker sur \'entrer\' pour retourner au menu");
    getchar();
}

int main()
{

    int choix = 0;
    int contact_counter = 0;
    int exit = 0;

    // DECLARATION DE TABLAUX CONTACTS
    struct contact list_contact[255];

    // MENU

    while (!exit)
    {
        menu(contact_counter);
        printf("ton choix : ");
        scanf("%d", &choix);
        getchar();

        system("cls");
        switch (choix)
        {
        case 1:

            add_contact(contact_counter, list_contact);
            contact_counter++;

            break;

        case 2:

            edit_contact(contact_counter, list_contact);
            break;

        case 3:

            delete_contact(&contact_counter, list_contact);
            break;

        case 4:

            show_all_contact(contact_counter, list_contact);
            break;

        case 5:

            afficher_un_contact(contact_counter, list_contact);
            break;

        default:

            // delete_contact(contact_counter , list_contact);
            break;
        }
        system("cls");
    }

    return 0;
}