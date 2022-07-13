#include<stdio.h>
#include<string.h>
int main(){ 
    int x,y;
    int i ;
    int j;
 char ch ;
 int len ;
  char s[100];
    int c=0;
      printf("CHAR");
      scanf("%c",&ch);
     printf("enter a word pls \n");
      gets(s);
len = strlen(s);
	   	
  	for(i = 0; i < len; i++)
	{
		if(s[i] == ch) 
		{
			for(j = i; j < len; j++)
			{
				s[j] = s[j + 1];
			}
			len--;
			i--;	
		} 
	}
    printf("%s",s);
return 0;

    }