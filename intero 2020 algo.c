#include <stdio.h>
#include <string.h>
int main(){
int N,i,j,k;
char c[20];
char s[10];
char a[20]="bonjour";
N=3;
char s1[20];
char d[20]="2020";
char g[20]= "ok";
for(i=0;i<N;i++){
printf("\tentrez le mot de passe\n");
gets(s);
if(strcmp(s,a)==0){
    printf("access accepte\n");
i=N;
}
else{
    printf("\tincorrect \n\ttry again\n");    

}

}
if(i==N && s!=a ){
    printf("\tcompte blocke\n");

printf("\tif want to try again press ok \n");
gets(c);
if(strcmp(g,c)==0){
    printf("\tquelle anne tu obtien ton bac \n ");
     gets(s1);
     if(strcmp(s1,d)==0){
     printf("\tacces accepte\n");
     }
     else{
   printf("\taccess refuse\n");
     }

   
}
else {
     printf("cya !!!!!!\n");
}
}
return 0;
}