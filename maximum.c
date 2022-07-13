#include <stdio.h>
int main(){ 
    float a,b,c;
    printf("Entree les 3 valeurs : \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (a>b && a>c){
                printf("le max est %f",a);
    }
    else if(b>c&&b>a){
    printf("le max est %f",b);
    }
     else if(c>b&&c>a){
    printf("le max est %f",c);
    }
return 0;

}   