#include <stdio.h>
int main(){
 int  s[3][4]= {
              {1,2,3,4},
              {4,5,6,4},
              {7,8,9,4}
              };
 int x= sizeof(s)/sizeof(s[1]);
 for(int i=0;i<x;i++){
     for(int j=0;j<x+1;j++){ 
     
     printf("%d \a",s[i][j]);
     
     } printf("\n");
 }



return 0;
 }

