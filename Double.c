#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
    int valeur;
    struct element *suiv,*prec;
}element;
bool estvide(element *t){
    bool b;
    if(t==NULL)
        b=true;
    else
        b=false;
    return b;
}
element *creeelement(){
    element *n,*d,*t=NULL;
    int nbr;
    char rep;
    do{
        printf("entrer l'element que vous voulez ajouter\n");
        scanf("%d",&nbr);
        n=malloc(sizeof(element));
        n->valeur=nbr;
        n->suiv=NULL;
        n->prec=NULL;
        if(t==NULL){
            t=n;
            d=n;
        }
        else{
            d->suiv=n;
            n->prec=d;
            d=n;
        }
        printf("est ce que vous voulez continuer? (y/n)\n");
        scanf("%s",&rep);
    }while(rep=='Y' || rep=='y');
    return t;
}
void affiche(element *t){
    element *e;
    e=malloc(sizeof(element));
    if(t==NULL){
        printf("la liste est vide\n");
    }
    else{
        e=t;
        while(e!=NULL){
            printf("%d\n",e->valeur);
            e=e->suiv;
        }
    }
}
void ajoutedebut(element **t,int v){
    element *nv,*te;
    te=*t;
    nv=malloc(sizeof(element));
    nv->valeur=v;
    nv->suiv=*t;
    nv->prec=NULL;
    te->prec=nv;
    *t=nv;
}
void ajoutpos(element **t,int v,int p){
    element *nv,*pre,*te,*temp;
    int cpt=1;
    nv=malloc(sizeof(element));
    nv->valeur=v;
    if(p==1){
        te=*t;
        nv->suiv=*t;
        nv->prec=NULL;
        te->prec=nv;
        *t=nv;
    }
    else{
        pre=*t;
        while(pre->suiv!=NULL && cpt<p-1){
            pre=pre->suiv;
            cpt++;
        }
        if(cpt<p-1)
            printf("position n'existe pas. l'element n'etait pas inserer avec succes !\n");
        else{
            nv->suiv=pre->suiv;
            temp=pre->suiv;
            pre->suiv=nv;
            nv->prec=pre;
            if(temp!=NULL)
                temp->prec=nv;
        }
    }
}
void ajoutfin(element *t,int v){
    element *nv,*p;
    p=t;
    nv=malloc(sizeof(element));
    nv->valeur=v;
    nv->suiv=NULL;
    while(p->suiv!=NULL){
        p=p->suiv;
    }
    p->suiv=nv;
    nv->prec=p;
}
void ajouttriee(element **t,int v){
    element *nv,*p,*pre=NULL;
    p=*t;
    nv=malloc(sizeof(element));
    nv->valeur=v;
    nv->suiv=NULL;
    nv->prec=NULL;
    while(p!=NULL && p->valeur<v){
        pre=p;
        p=p->suiv;
    }
    if(pre!=NULL){
        pre->suiv=nv;
    }
    nv->suiv=p;
    if(p!=NULL)
        p->prec=nv;
    nv->prec=pre;
    if(pre==NULL)
        *t=nv;
}
void compt(element *t){
    int cpt=0;
    while(t!=NULL){
        cpt++;
        t=t->suiv;
    }
    printf("cette liste est composee de %d elements\n",cpt);
}
void recherche(element *t,int v){
    bool b=false;
    while(t!=NULL && b==false){
        if(t->valeur==v){
            b=true;
        }
        t=t->suiv;
    }
    if(b==true)
        printf("cet element existe dans la liste\n");
    else
        printf("cet element n'existe pas dans la liste\n");
}
void suppr(element **t,int pos){
    element *p,*prec,*temp;
    int cmp=1;
    p=malloc(sizeof(element));
    prec=malloc(sizeof(element));
    if(pos==1){
        prec=*t;
        p=prec->suiv;
        *t=p;
        free(prec);
        p->prec=NULL;
    }
    else{
        p=*t;
        while(cmp<pos && p!=NULL){
            prec=p;
            p=p->suiv;
            cmp++;
        }
        if(p==NULL){
            printf("cet element n'existe pas \n");
        }
        else{
            if(p->suiv==NULL){
                prec->suiv=NULL;
                free(p);
            }
            else{
                prec->suiv=p->suiv;
                temp=p->suiv;
                temp->prec=prec;
                free(p);
            }
        }
    }
}
void destruct(element **t){
    element *p,*suiv;
    p=*t;
    *t=NULL;
    while(p!=NULL){
        suiv=p->suiv;
        free(p);
        p=suiv;
    }
    printf("liste detruit avec succes \n");
}
int main()
{
    element *t;
    t=creeelement();
    affiche(t);
    return 0;
}