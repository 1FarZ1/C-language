#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}node;
bool check();
void print(node *head);
void append(int x, node *head);
node* debut(int x,node *head);
node* delete(int x,node *head);
void search(int x,node *head);
int count(node *head);
void middle(int k ,int x,node *head);
void deleteList( node** head);
node* insert_trie(int v,node* head);

node* trie(node *head){
    node *g,*q;
    int tmp;
    g=head;
    while(g->next!=NULL)
    {
        q=g->next;
        while(q!=NULL)
        {
        if(q->data<g->data)
        {
         tmp=g->data;
            g->data=q->data;
            q->data=tmp;

        }
        q=q->next;
        }
        g=g->next;
        }
        return head;

}
int main(){
node* Head=NULL;
Head=debut(30,Head);
Head=debut(40,Head);
Head=debut(10,Head);
print(Head);
Head=trie(Head);
print(Head);

}
bool check(node *head){
if (head == NULL){
    return 0;
}
else{
   return 1;
}
}
void print(node *head){
    node *ptr=head;
    int i=0;
    while(ptr != NULL){ 
        printf("The %d value is : %d\n",i+1,ptr->data);
        ptr=ptr->next;
        i++;
    }
}
node* create(int n){
    node *head=NULL;
    node *p=NULL;
    node *current=NULL;
    for(int i=0;i<n;i++){
        current=malloc(sizeof(node));
        printf("Enter the valeur \n");
        scanf("%d",&current->data);
        current->next=NULL;
        if(head==NULL){
            head=current;
        }
        else{
            p=head;
            while(p->next !=NULL){
                p=p->next;
            }
            p->next=current;
        }
    }
    return head;
}
void append(int x,node *head){
node*ptr=head;
node*temp=malloc(sizeof(node));
temp->data=x;
if(ptr==NULL){
    head=temp;
    temp->next=NULL;
}
else{
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=NULL;
}
}
node* debut(int x,node *head){
    node*ptr=head;
    node*temp=malloc(sizeof(node));
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}
node* delete(int x,node *head){
    node*ptr=head;
    node*a=ptr;
    node*b=ptr;
    if (a->data==x){
        ptr=a->next;
        free(a);
        return ptr;
    }
    else{
        while(a->data !=x){
            b=a;
            a=a->next;
            if(a==NULL){
                break;
            }
        }
        if(a==NULL){
            printf("this number doesnt exist\n");
        }
        else{
        b->next=a->next;
        free(a);
        return ptr;
        }
    }
}
void search(int x,node *head){
    node*ptr=head;
    while(ptr->data!= x){
        ptr=ptr->next;
        if(ptr==NULL){
            printf("This number doesnt existe");
            break;
        }
    }
    if (ptr !=NULL){
        printf("This number existe \n");
    }

}
int count(node *head){
    node*ptr=head;
    int i=0;
    while(ptr != NULL){
        i++;
        ptr=ptr->next;
    } 
    return i;
}
void middle(int k,int x,node *head){
    node*ptr=head;
    node*new=malloc(sizeof(node));
    new->data=x;
    new->next=NULL;
    if(k == 0){
        new->next = ptr; 
        ptr = new;
    }
    while(--k){
        ptr=ptr->next;
    }
    new->next= ptr->next;
    ptr->next = new;
}
void deleteList(struct node** head)
{  
   node* current = *head;
   node* next;
  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
  *head = NULL;
}
node* insert_trie(int v,node* head){
 node *nv,*p,*prec;
    p=head;
    nv=malloc(sizeof(node));
    nv->data=v;
    nv->next=NULL;
    while(p->data<v){
        prec=p;
        p=p->next;
    }
    prec->next=nv;
    nv->next=p;
    return head;
}