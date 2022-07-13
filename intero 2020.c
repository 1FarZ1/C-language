#include<stdio.h>
int main(){
int N,i,j,k;
char s[100];
printf("entrez le mot de passe\n");
gets(s);
N=3;
for(i=0,i<N,i++){
printf("entrez le mot de passe\n");
gets(s);
if(s=='bonjour')
N=i-1;
}
else{
    printf("incorrect \n try again\n");
    N++;
}
}
return 0;
}