#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/** array
int stack[5];
int top=-1;
void push(int x);
int pop();
void display();
int main(){
    push(5);
    push(10);
    pop();
    display();

}
void push(int x){
    if(top==4){
        printf("Stack overflow\n");

    }
    else{  
        top++;
        stack[top]=x;
      
    }
}
int pop(){
    if (top==-1){
        printf("Stack underflow\n");
        return 0;
    }
    else{ 
        return stack[top--];
    }
}
void display(){
     if (top==-1){
        printf("Stack underflow\n");
    }
    else{ 
        for(int i=top;i>=0;i--){
            printf("The value is : %d\n",stack[i]);
        }
    }
} **/
/** linked list **/
typedef struct node{
    int val;
    struct node* next;
}node;
typedef struct pile{
    node*top;
    int cmpt ;
}pile;
pile* intipiler();
int sommet(pile P);
bool est_vide(pile p);
void afficherPileinverse(pile *p);
void empiler(pile* P,int x);
int depiler(pile* P);
void affichage(pile P);
int main(){
pile* P=intipiler();
P->top=NULL;
P->cmpt=0;
empiler(P,10);
empiler(P,20);
affichage(*P);
// printf("nombre des elements de la pile : %d \n",P->cmpt);
// printf(" %d ",sommet(*P));
afficherPileinverse(P);


}
pile* intipiler(){
    pile *pi = malloc(sizeof(*pi));
    pi->top = NULL;
    return pi;
} 
bool est_vide(pile p){
    if(p.top==NULL){
        return true;
    }
    return false;
}
void empiler(pile *P,int x){
    node *n;
    n=malloc(sizeof(node));
    n->val=x;
    n->next=P->top;
    P->top=n;
    P->cmpt ++;
}
int depiler(pile *P){
    node *ptr;
    if (P->top==NULL){
        printf("STackunderflow\n");
    }
    else{
        ptr=P->top;
        int data=ptr->val;
        P->top=P->top->next;
        free(ptr);
        return data;
    }
}
void affichage(pile P){
    if (P.top==NULL){
        printf("STackunderflow\n");
    }
    else{
        node *ptr=P.top;
        while(ptr !=NULL){
            printf(" Value : %d\n",ptr->val);
            ptr=ptr->next;
        }
    }
}
int sommet(pile p){
    return p.top->val;
}
void afficherPileinverse(pile *p)
{

    pile *p1=intipiler();
    int nvNbr;
     while (!(est_vide(*p)))
    {
	nvNbr=depiler(p);
        empiler(p1,nvNbr);
    }
     while ( !(est_vide(*p1)))
    {
	nvNbr=depiler(p1);
        printf("%d\n", nvNbr);
        empiler(p,nvNbr);
    }
    printf("\n");
}