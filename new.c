#include<stdio.h>
#include<stdlib.h>
// Linked List

typedef struct node {
    int num;
    struct node *next;
}node;

int count_node(node *head){
    int count=0;
if(head==NULL){
    return count;
}
else{
 node *ptr=head;
 while(ptr!=NULL){
     count ++;
     ptr=ptr->next;
 }
 return count;
}
};
void print(node *head){
    int count=0;
if(head==NULL){
   printf("List Empty\n");
}
else{
 node *ptr=head;
 while(ptr!=NULL){
     printf("%d",ptr->num);
     ptr=ptr->next;
 }
}
};
void insert_fin(node **head,int x){
    node *temp;
    node*ptr=*head;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    temp=malloc(sizeof(node));
    temp->num=x;
    temp->next=NULL;
    ptr->next=temp;
}
int main(){
    node* head=NULL;
    insert_fin(&head,30);
    insert_fin(&head,40);
    print(head);

}