#include<stdio.h>
void *strcat(char *s1, char *s2)
{while(*s1!='\0')                                //2
   s1++;
     while(*s2!='\0')                                //3
     {
            *s1=*s2;                                 //4
             s1++;                                         
             s2++;                                         
     }
      *s1='\0';                 
}
int main()
{
	char str1[]= "google";
	char str2[] = "india";
    strcat(&str1[0],&str2[0]);
    printf("%s",str1);
	return 0;
}
