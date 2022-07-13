#include <stdio.h>  

int main(){
    int i = 0, k = 0;
    char word[10];

    printf("Enter a word\n");
    scanf("%s",&word);

    while(true){
        if(word[k] == 'A'|| word[k]== 'a'|| word[k]=='e'|| word[k]=='E'|| word[k]=='u'|| word[k]=='y'|| word[k]=='U'|| word[k]=='Y'|| word[k]=='o'|| word[k]=='O'|| word[k]=='I'|| word[k]=='i'){
            i++;
            k++;
            
        }/* else if(k == 10){
            
            } */
        
        printf("%d",i);
    return 0;
}