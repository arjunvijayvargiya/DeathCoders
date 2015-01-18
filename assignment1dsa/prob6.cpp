#include<stdio.h>
#include<string.h>
char inc(char c)
{
	if(c=='x')
	  return 'a';
	else if(c=='y')
	  return 'b';
	else if(c=='z')
	  return 'c';
	else
	  return (c+3);
} 
int main() {
   char msg[] = "have a good day";
   char str[10];
 
   int i = 0, j = 0;

 
   while (msg[i] != '\0') {
      if (msg[i] != ' ') {
         str[j] = msg[i];
         //printf("assigning %c to str[%d] \n",msg[i],j);
         j++;
      } else {
         str[j] = '\0';
         int t=j-1;
                   
         while(t>=0)
		 {
		   printf("%c",inc(str[t]));
		   t--;
         }
		 printf(" ");
         j = 0;
      }
      i++;
   }
 
   str[j] = '\0';
   int y=j-1;
   while(y>=0)
		 {
		   printf("%c",inc(str[y]));
		   y--;
         }
 
 return 0;
}
