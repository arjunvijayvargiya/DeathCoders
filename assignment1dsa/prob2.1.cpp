#include<stdio.h>
int strlen(char *str);
int main()
{
	char *string="good";
	printf("%d",strlen(string));
	
	
return 0;	
}
int strlen(char *str)
{
	char *cptr=str;
	char *name=str;
	while(*cptr!='\0')
	{
		cptr++;
	}
	int len=cptr-name;
	return len;
	
}
