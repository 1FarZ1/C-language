#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, len, j;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Remove :  ");
  	scanf("%c", &ch);
  	
	len = strlen(str);
	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] == ch)
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;	
		} 
	}	
	printf("\n The Final String after Removing All Occurrences of '%c' = %s ", ch, str);
	
  	return 0;
}