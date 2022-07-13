#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int N,i,j,k;
char s[100],s1[100];
N=3;
for(i=0;i<N;i++){
printf("entrez le mot de passe\n");
gets(s);
if(s[0]=='b' && s[1]=='o' && s[2]=='n' && s[3]=='j' && s[4]=='o' && s[5]=='u' && s[6]=='r'){
    printf("quelle \n");
    gets(s1);
    i=N-1;
    if(s1[0]=='2' && s1[1]=='0' && s1[2]=='2' && s1[3]=='0'){
        printf("access\n");
  
    }
    else{
        printf("Refuse\n");


    }
}
else{
    printf("incorrect \ntry again\n");
}
}
return 0;
}