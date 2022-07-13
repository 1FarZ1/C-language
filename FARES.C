#include <stdio.h>
int main(){
   char  s[1000];
   char s1[1000];
   int c = 0 , i = 0;
   int j=0; int k=0;
printf("Enter the 2 sentences  u want to  take its length \n");
gets(s);
gets(s1);
while(s[c]!='\0'){
    if(s[c]==32){
        i--;
    }
i++;
c++;

}
while(s1[k]!='\0'){
    if(s1[k]==32){
        j--;
    }
j++;
k++;

}
printf("the lenght of 1 is : %d \n",i);
printf("the lenght of 2 is : %d \n",j);
printf("the con is %s %s",s,s1);
 return 0;}

