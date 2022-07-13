#include<stdlib.h>
#include<math.h>
int main()
{  float x,y,z;
int i;
float e=2.71828182846 ;
    printf("enter the number  u want \n");
 scanf("%f",&x);
if(x<0){  y=-x;
          printf("sa valeur absolu est : %.2f\n",y);




}
else {
    
    
    printf("sa valeur absolu est : %.2f\n",x);




}
float carre = x*x;
printf("son carre est %.2f\n",carre);
float racine = sqrt(x);
if(x>=0){
printf("son racine carre est %.2f\n",racine);
}
else{
 printf("math error\n");
}

int k=x;
float r = exp(x);
printf("son expo valeur est %.2f \n",r);
   
printf("sa partie entier est : %i  \n" ,k);

return 0;


 
}  


