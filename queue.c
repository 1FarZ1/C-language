#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/** array 
int queue[5];
int front=-1,rear=-1;
int top=-1;
void enfiller(int x);
int pop();
void display();
int main(){
    enfiller(5);
    enfiller(10);
    enfiller(100);
    int a=pop();
    printf("a = %d\n",a);
    display();

}
void enfiller(int x){
if(rear == 4){
    printf("Stackoverflow\n");
}
else{
    if(front ==-1 && rear==-1){
        rear++;
        front++;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
}
int pop(){
  if(front ==-1 && rear==-1){
    printf("Stack underflow\n");
  }
  else if(front <= rear)
  {
      int data=queue[front];
      front++;
      return data;
  }
}
void display(){
 for(int i=front; i<=rear; i++)
       {
            printf("%d\n", queue[i]);
        }
}
**/
/** linked list **/
typedef struct node{
    int val;
    struct node *next;
}node;
typedef struct file{
    node * front;
    node * rear;
    int cmpt;
}file;
bool est_vide(file f);
void enfiller(file *f,int x);
int defiller(file *f);
void display(file *f);
file* initialiser();
int main()
{   
    file* f=initialiser();
    f->front=NULL;
    f->rear=NULL;
    f->cmpt=0;
    enfiller(f,10);
    enfiller(f,30);  
    enfiller(f,50);
    defiller(f);
    printf("The nombre of elements in this file is : %d\n",f->cmpt);
    display(f);

}
file * initialiser(){
    file *f = malloc(sizeof(*f));
    f->front = NULL;
    f->rear=NULL;
    return f;
}
bool est_vide(file f ){
    if(f.front==NULL  &&  f.rear==NULL){
        return true;
    }
    else{
        return false;
    }
}
void enfiller(file *f,int x){
node * n=malloc(sizeof(node));
n->val=x;
n->next=NULL;
if(f->front==NULL  &&  f->rear==NULL){
    f->front=n;
    f->rear=n;
}
else{
    f->rear->next=n;
    f->rear=n;
}
f->cmpt+=1;
}
int defiller(file *f){
    if(f->front==NULL && f->rear==NULL){
        printf("liste vide\n");
    }
    else{
        node*temp=f->front;
        int data=temp->val;
        f->front=f->front->next;
        free(temp); 
        f->cmpt-=1 ;
        return data;
    }
   

}
void display(file *f)
{

    file *f1=initialiser();
    int nvNbr;

     while ( !(est_vide(*f)))
    {
        nvNbr=defiller(f);
        printf("%d\n", nvNbr);
        enfiller(f1,nvNbr);
    }
     while ( !(est_vide(*f1)))
    {
	nvNbr=defiller(f1);
        enfiller(f,nvNbr);
    }
    printf("\n");
}