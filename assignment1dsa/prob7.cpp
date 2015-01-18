#include<stdio.h>
#include<string.h>
int dictionary(char a1[],int len1,char a2[],int len2);
void merge(char a[][80],int m,char b[][80],int n,char sorted[][80]);
int main()
{
	char str1[][80]={"toy","class","bay","morning"};
	char str2[][80]={"give","sun","balloon","son","bus"}; 
    int len1=sizeof(str1)/sizeof(str1[0]);
    int len2=sizeof(str2)/sizeof(str2[0]);
	char merger[len1+len2][80];
	char swap[30];
  int pos;
  for(int i=0;i<len1;i++)
  {
  	 //strcpy(min,arr[i]);
  	 pos=i;
  	 for(int j=i+1;j<len1;j++)
  	 {  int res=0;
  	    //printf("\n comparing %s and %s \n",arr[i],arr[j]);
  	 	res=dictionary(str1[j],strlen(str1[j]),str1[pos],strlen(str1[pos]));
  	 	if(res==1)
  	 	  {
  	 	  	 pos=j;    	 	     	 
  	 	  }
  	 	
  	 }
  	 //printf("swapping %s and %s \n",arr[i],arr[pos]);
  	 strcpy(swap,str1[pos]);
  	 strcpy(str1[pos],str1[i]);
  	 strcpy(str1[i],swap); 	
  }	
 /* for(int p=0;p<len1;p++)
     printf(" \n %s \n ",str1[p]);
*/
char swap2[30];
  int pos2;
  for(int i=0;i<len2;i++)
  {
  	 //strcpy(min,arr[i]);
  	 pos2=i;
  	 for(int j=i+1;j<len2;j++)
  	 {  int res=0;
  	    //printf("\n comparing %s and %s \n",arr[i],arr[j]);
  	 	res=dictionary(str2[j],strlen(str2[j]),str2[pos2],strlen(str2[pos2]));
  	 	if(res==1)
  	 	  {
  	 	  	 pos2=j;    	 	     	 
  	 	  }
  	 	
  	 }
  	 //printf("swapping %s and %s \n",arr[i],arr[pos]);
  	 strcpy(swap2,str2[pos2]);
  	 strcpy(str2[pos2],str2[i]);
  	 strcpy(str2[i],swap2); 	
  }	
  /*for(int p=0;p<len2;p++)
     printf(" \n %s \n ",str2[p]);
    */
	 merge(str1,len1,str2,len2,merger);
     for (int c = 0; c < len1 + len2;c++) {
       printf("%s \n",merger[c]);
  }
	return 0;
}
int dictionary(char a1[],int len1,char a2[],int len2)
{
    //char a1[]="ar";
	//char a2[]="arjunjeet";
	//int t1=(int)a1;
	int flag=0;
	for(int i=0;i<strlen(a1) || i<strlen(a2);i++)
	{//printf("comparing %c and %c \n",a1[i],a2[i]);
		if(a1[i]>a2[i])
		  {
		  	flag=2;
		  	break;
		  }
		if(a1[i]<a2[i])
		  {
		  	flag=1;
		  	break;
		  }
	}
	/*if(flag==1)
	  printf("string %s is smaller dan %s \n",a1,a2);
	else if(flag==2)
	  printf("string %s is smaller dan %s \n",a2,a1);
	else
	  printf("string 1 and 2 are equal \n");
	  */
	  
   return flag;
}
void merge(char a[][80], int m, char b[][80], int n, char sorted[][80]) {
  int i, j, k;
 
  j = k = 0;
 
  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (dictionary(a[j],strlen(a[j]),b[k],strlen(b[k]))==1) {
        //sorted[i] = a[j];
        strcpy(sorted[i],a[j]);
		j++;
      }
      else {
        strcpy(sorted[i],b[k]);
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        strcpy(sorted[i],b[k]);
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        strcpy(sorted[i],a[j]);
        j++;
        i++;
      }
    }
  }
}
