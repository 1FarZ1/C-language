#include <stdio.h>
#include <stdlib.h>

//Cr�er des �l�ments dispers�s dans la m�moire
Element  *create(int a){
	Element  *e ;
	e=(Element*)malloc(sizeof(Element)) ;
    e->contenu=a ;
    e->suivant=NULL ;
return e ;
}

//Tester si la liste est vide
int est_vide (Element *p){
if (p== NULL) return 1 ;
    return 0 ;
}


//Affiche une liste
 void afficherListe(Element *p){
    int v=est_vide(p);
    if (v==1) {
        printf("la liste est vide");
    }else{
  Element *pt;
  for (pt=p;pt!=NULL;pt=pt->suivant){
    printf("%d --",pt->contenu);
  }
    }
}
