#include<stdio.h>
#include<stdlib.h>
int rec(int n){
if(n==0){
    return 0;
}
else{
    return n + rec(n-1);
}
}
int puss(int x ,int n){
if(n==0){
    return 1;
}
else{
    return x*puss(x,n-1);
}
}
int pgcd(int a ,int b){
if(a % b ==0){
    return b;
}
else{
    return pgcd(b,a %b);
}
}
void cross(int n){
    if(n==0){
        printf("%d \n",n);
    }
    else{
        cross(n-1);
        printf("%d \n",n);
    }
}
void decross(int n){
    if(n==0){
        printf("%d \n",n);
    }
    else{
        printf("%d \n",n);
        decross(n-1);
    }
}
int bin(int x){
if(x==0){
    return 0;
}
else{
    return x%2 +10*bin(x/2);
}
}
void affiche(int n,int t[n]){
if(n==0){printf("%d \n",t[n]);}
else{
    printf("%d \n",t[n]);
    affiche(n-1,t);
}
}
int calc(int n,int t[n]){
    if(n==0){
        return t[n];
    }
    else{
        return t[n]+calc(n-1,t);
    }
}
int main(){
    int t[5]={7,1,2,3,4};
    affiche(5-1,t);


}