#include <stdio.h>
#include <stdlib.h>
int main(){
Element *L ;
L=NULL ;
int v ;
v =est_vide(L) ;
if (v==1)
    printf ("ma liste est vide\n") ;
else
    printf ("liste pleine\n") ;

Element   *e1, *e2, *e3, *e4 ;

//Afficher des �l�ments dispers�s dans la m�moire
e1 =create (1) ;
printf("%d - %d - %d\n", e1, e1->contenu, e1->suivant);
e2 =create (5) ;
printf("%d - %d - %d\n", e2, e2->contenu, e2->suivant);
e3 =create (7) ;
printf("%d - %d - %d\n", e3, e3->contenu, e3->suivant);
e4 =create (9) ;
printf("%d - %d - %d\n\n\n", e4, e4->contenu, e4->suivant);

//Choisir le repr�sentant
Element *L1;
L1 = e1;

//Enchainer les �l�ments

e1->suivant =e2;
e2->suivant = e3;
e3->suivant = e4;

printf("%d - %d - %d\n", e1, e1->contenu, e1->suivant);
printf("%d - %d - %d\n", e2, e2->contenu, e2->suivant);
printf("%d - %d - %d\n", e3, e3->contenu, e3->suivant);
printf("%d - %d - %d\n\n\n", e4, e4->contenu, e4->suivant);

//Afficher la liste chain�e
afficherListe (L1);

    return 0;
}
