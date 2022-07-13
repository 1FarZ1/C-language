#include<stdio.h>
#include<stdlib.h>
int rear=-1,front=-1;
int que[5];
typedef struct node{
    int val;
    struct node*next;
}node;
node *front1;
node *rear1;
void enqueue(int x);
void dequeue();
void display();
void enqueue1(int x);
void dequeue1();
void display1();
int main(){
enqueue1(2);
enqueue1(3);
enqueue1(4);
display1();
}
void enqueue(int x){
    if (rear==4){
        printf("The queue is Full ! \n");
    }
    else{ 
    if (front==-1 && rear==-1){
        rear++;
        front++;
        que[rear] = x;
    }
    else{ 
        rear++;
        que[rear] = x;
    }
       
    }
}
void dequeue(){
    if(front!=-1 && rear!=-1 && front<=rear){
        front++;
    }
}
void display(){
    if(front !=-1 && rear!=1 && front<=rear){
        for(int i=front;i<=rear;i++){
         printf("The value is : %d\n",que[i]);
    }
    }
}
void enqueue1(int x){
   node *n=malloc(sizeof(node));
   n->val=x;
   n->next=NULL;
   if(front1==NULL && rear1==NULL){
       rear1=n;
       front1=n;
   }
   else{
       rear1->next=n;
       rear1=n;
   }
}
void dequeue1(){
    if(front1!=NULL && rear1!=NULL ){
            node *temp=front1;
            front1=front1->next;
            free(temp);
    }
}
void display1(){
    if(front1 !=NULL && rear1!=NULL ){
        node*i=front1;
     while(i !=rear1->next){
         printf("The value is : %d\n",i->val);
         i=i->next;
     }
    }
}