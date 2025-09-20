// Challenge 3 : Passage de Structure en Argument

#include <stdio.h>

struct rectangle{
    int longueur;
    int largeur;
};


int calcule_aire_rectangle(struct rectangle r){
    return r.largeur * r.largeur  ;
}

int main (){
    struct rectangle rectangle1;
    rectangle1.largeur = 10;
    rectangle1.longueur = 20;

    printf("l\'aire de votre rectangle est %d " , calcule_aire_rectangle( rectangle1));

}