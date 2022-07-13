//guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 srand(time(0));
 int j =0;
 int y;
 int x=(rand() % 100) +1 ;
printf("%d \n",x);
 do{
 printf("ENTER a number pls\n ");
 scanf("%d",&y);
     if(y>x){
         printf("its higher \n");

     }
     else {
         printf("its lower \n");
         j++;
}}while(x!=y); 
printf("---Great Guess---- \n");
printf(" --Number of guesses is : %d",j);
return 0;
}