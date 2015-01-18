#include<stdio.h>
#include<stdlib.h>
void palindrome(char *str)
{
   char *start=str;
   while(*str)
     str++;	
   str--;
   while(*start)
   {
   	  if(*start!=*str)
   	   {
   	   	   printf("the string is not a palindrome \n");
   	   	   exit(1);
   	   }
   	   start++;
   	   str--;
   }
	printf("the string is a palindrome \n");
}
int main()
{

   char string[]="aurxrua";
   palindrome(string);


return 0;
}
