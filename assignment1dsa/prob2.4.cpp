#include<stdio.h>
int strend(char *str1,char *str2)
{int res=1;
   int len=0;
   while(*str1)
  {
      
      str1++;

  }
   while(*str2)
   {
      len++;
      str2++;
   }
   len--;
   while(len>=0)
   {//printf("comparing %c with %c \n",*str1,*str2);
       if(*str1==*str2)
       {
          
          str1--;
          str2--;
          len--;
       }
       else
       {  res=0;
         break;
       }

   }
return res;
}
int main()
{

   char st1[]="google";
   char st2[]="goe";
 int g=strend(st1,st2);
printf("%d",g);

}
