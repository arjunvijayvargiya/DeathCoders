#include<stdio.h>
#include<string.h>
int main()
{   int status=-1;
	char str[10];
	printf("enter your string:\n");
	gets(str);
	//printf("%s",str);
	char comp[10];
	printf("type string comp: \n");
	gets(comp);
	int i=0;	
	while(str[i]!='\0')
	{
		if(comp[0]==str[i])
		 {  status=i;
		 	for(int j=0,cnt=i;comp[j]!='\0';j++,cnt++)
		 	  {
		 	  	if(comp[j]!=str[cnt])
		 	  	 {status=-1;
		 	  	  break;
		 	     }
			   }
		 }
		 if(status>0)
		   break;
		 i++;
	}
	printf("the string found at position:%d",status+1);	
	return 0;
}

