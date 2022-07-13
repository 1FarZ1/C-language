#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    char name[20],lname[20];
    struct node* next;
}node;
void append(node** head,int x);
void debut(node** head,int x );
void pos(node** head,int x,int k );
int plus_agee(node* head);
int main(){
node *head=NULL;
append(&head,5);
debut(&head,6);

}
void append(node** head,int x){
    node* p=head;
    node* n=malloc(sizeof(node));
    n->val=x;
    n->next=NULL;
    if(head==NULL){
        head=n;
    }
    else {
    while(p->next != NULL){
        p=p->next;
    }
    p->next=n;
    }
}
void debt(node** head,int x){
    node* p=*head;
    node* n=malloc(sizeof(node));
    n->val=x;   
    n->next=p;
    p=n;
    *head=p;
}  
void pos(node** head,int x,int k){
    node* p=*head;
    node* n=malloc(sizeof(node));
    n->val=x;
    n->next=NULL;
    while(k-- >1){
        p=p->next;
    }
    n->next= p->next;
    p->next=n;
}
int plus_agee(node* head){
    node* p= head;
    int max=p->val;
    while(p !=NULL){
        if(p->val > max){
            max=p->val;
        }
        p=p->next;
    }
}
