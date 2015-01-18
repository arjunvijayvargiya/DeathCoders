#include<stdio.h>
#include<malloc.h>
char *reverse(char *original)
{
  char *start=original;
  char *ptr=original;
    int len=0;
	while(*original)
    {
    	original++;
    	len++;
    }
    len--;
    original--;
    int t=len/2;
    while(len>=t)
    {    char temp=*ptr;
    	*ptr=*original;
    	*original=temp;
    
    	ptr++;
    	original--;
    	len--;
    }
    char c='\0';
    ptr=&c;
    return start;
}
int main()
{   char str[]="arjun";
	char *rev=reverse(str);
	printf("%s",rev);
	
	return 0;
}
