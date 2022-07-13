#include <stdio.h>
int main(){
    int N,b,c,d,a;
    a=1;
    b=1;
    printf("ENter the N : \n");
    scanf("%d",&N);
    int  i=0;
    for(i=0;i<N-1;i++)
    {
      d=a+b;
      c=a;
      a=d;
      b=c;
      
    }
    
    
    printf("%d",d);
return 0;

}

