#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//DECLARATION DE STRUCTEUR
struct contact {
    char name[255] ;
    char phone_number[255] ;
    char email[255] ;
};

void menu(){
        printf("+---------------------------------------------------------------+\n") ;
        printf("|1.ajouter un contact                                           |\n") ;
        printf("|2.modifier un contact                                          |\n") ;
        printf("|3.supprimer un contact                                         |\n") ;
        printf("|4.aficher tous les contact                                     |\n") ;
        printf("|5.recherch par un contact                                      |\n") ;
        printf("+---------------------------------------------------------------+\n\n") ;
}

void add_contact(struct contact list_contact[] , int contact_counter){
    
    getchar() ;

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

    }
}

void search_for_contact(){}


int main () {

    int choix = 0 ;
    int contact_counter = 0 ;
    int exit = 0 ;

    //DECLARATION DE TABLAUX CONTACTS
    struct contact list_contact[255];

    //MENU
    menu() ;

    while(!exit){
    

        printf("ton choix : ") ;
        scanf("%d" , &choix ) ;

        // system("cls");
        switch(choix){
            case 1 :

                add_contact(list_contact ,contact_counter) ;
                break ;
                
            case 2 :
                
                edit_contact() ;
                break ;

            case 3 :

                delete_contact() ;
                break ;

            case 4 :

                show_all_contact(list_contact ,contact_counter) ;
                break ;

            case 5 :

                search_for_contact() ;
                break ;
            
            default :
                    
                delete_contact() ;
                break ;
        }
        // system("cls");
    }



    return 0 ;
}