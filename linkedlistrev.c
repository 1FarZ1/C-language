#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node* next;
}node;
int check(node *head);
node *create(int n);
void print(node *head);
void append(node *head,int x);
node *debut(node *head,int x);
void pos(node *head,int x ,int n);
void count(node *head);
void search(node *head,int x);
void delete(node *head,int x);
void deleteList(node **head);
void trie(node **head, int x);
int main(){
    int n;
    node*head;
printf("How much element u want in this list\n");
scanf("%d",&n);
head=create(n);
print(head);
printf("--The Next Round --\n");
append(head,5);
print(head);
printf("--The Next Round --\n");
head=debut(head,6);
print(head);
printf("\n--The Next Round --\n");
count(head);
printf("\n--The Next Round --\n");
pos(head,2,100);
print(head);
count(head);
printf("\n--The Next Round --\n");
search(head,3);
count(head);
printf("\n--The Next Round --\n");
delete(head,2);
print(head);
count(head);
}
int check(node *head){
if(head==NULL){
    return 1;
}
else{
    return 0;
}
}
node *create(int n){
    node *head=NULL;
    node *p=NULL;
    node *current=malloc(sizeof(node));
    for(int i=0; i<n; i++){
        node *current=malloc(sizeof(node));
        printf("Entre la valeur : \n");
        scanf("%d",&current->val);
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
void print(node *head){
    node *ptr=head;
    int i=0;
    while(ptr != NULL){ 
        printf("The %d value is : %d\n",i+1,ptr->val);
        ptr=ptr->next;
        i++;
    }
}
void append(node *head,int x){
    node*ptr=head;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    node*new=malloc(sizeof(node));
    new->val=x;
    new->next=NULL;
    ptr->next=new;
}
node *debut(node *head,int x){
node *ptr=head;
node *new=malloc(sizeof(node));
new->val=x;
new->next=ptr;
head=new;
return head;
}
void pos(node *head,int x,int n){
    node *ptr=head;
    node *a=head;
    int i=1;
    while(i<x){
        a=ptr;
        ptr=ptr->next;
        i++;
    }
    node *new=malloc(sizeof(node));
    new->val=n;
    new->next=ptr;
    a->next=new;
}
void count(node *head){
    int i=0;
    node *ptr=head;
    while(ptr !=NULL){
        ptr=ptr->next;
        i++;
    }
printf("Number of nodes is  : %d\n",i);
}
void search(node *head,int x){
    node *ptr=head;
    while(ptr->val != x){
        ptr=ptr->next;
        if(ptr==NULL){
            break;
            printf("\n%d doesnt existe in this list ");
        }
    }
    if (ptr !=NULL){
        printf("\n%d existe in this list \n",x);
    }

}
void delete(node *head,int x){
        node *ptr=head;
        node*a=NULL;
    while(ptr->val != x && ptr !=NULL){
        a=ptr;
        ptr=ptr->next;
    }
    if (ptr !=NULL){
            a->next=ptr->next;
            free(ptr);
    }
    else{
        printf("this number doesnt existe\n");
    }

}
void deleteList( node** head)
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
void trie(node **head, int x){
node*ptr=head;
node*a=head;
node *new=malloc(sizeof(node));
new->val=x;
while(ptr->val < x ){
    a=ptr;
    ptr=ptr->next;
}
    a->next=new;
    new->next=ptr;
}