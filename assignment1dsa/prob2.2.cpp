#include<stdio.h>
#include<malloc.h>
void strcpy(char *src, char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
		
	}
	*dest=*src;
	return;
}
int main()
{
	char *str1="good";
	char *str2=(char *)malloc(sizeof(char));
	strcpy(str1,str2);
	printf("%s",str2);
	return 0;
}



