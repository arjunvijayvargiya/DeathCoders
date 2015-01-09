#include<stdio.h>
#include<stdlib.h>
/*

  AUTHOR :Arjun Vijayvargiya
  DESCRIPTION:Problem solved by the Author


*/
struct big
{
	int val;
	big *next;
	
};
void getter(big *);
void display(big *);
int count(big *);
int main()
{big *big1,*big2;
 big1=(big *)malloc(sizeof(big));
 big2=(big *)malloc(sizeof(big));
 getter(big1);
 //display(big1);
 printf("\n\n");
 getter(big2);
 //display(big2);
 int b1=count(big1);
 int b2=count(big2);
 printf(" \n b1=%d",b1);
 printf(" \n b2=%d",b2);
 
 int carry=0;
 int sum=0;
 int p=-1;
 int arr[50];
 while(big1->val!=-1 && big2->val!=-1)
 {
 	sum=(big1->val)+(big2->val)+carry;
 	printf(" \n adding %d + %d \n",(big1->val),(big2->val));
 	if(sum>9)
 	 {
 	 	int s=sum%10;
 	 	carry=sum/10;
 	 	arr[++p]=s;
 	 }
 	else
 	  {
 	  	carry=0;
 	  	arr[++p]=sum;
 	  }
 	  printf("\n sum=%d and carry=%d \n",sum,carry);
 	  big1=big1->next;
 	  big2=big2->next;	
 }
printf("\n\n next \n\n");
 if(b1==b2)
 {
   if(carry>0)
   arr[++p]=carry;
   printf("\n");
 }
 else if(b2>b1)
 {  while(big2->val!=-1)
    {
    sum=(big2->val)+carry;
    if(sum>9)
 	 {
 	 	int s=sum%10;
 	 	carry=sum/10;
 	 	arr[++p]=s;
 	 }
 	else
 	  {
 	  	carry=0;
 	  	arr[++p]=sum;
 	  }
 	  printf("\n sum=%d and carry=%d \n",sum,carry);
 	  big2=big2->next;
    }
    if(carry>0)
      arr[++p]=carry;
   printf("\n");
     
 }
 else
 {
 	while(big1->val!=-1)
    {
    sum=(big1->val)+carry;
    if(sum>9)
 	 {
 	 	int s=sum%10;
 	 	carry=sum/10;
 	 	arr[++p]=s;
 	 }
 	else
 	  {
 	  	carry=0;
 	  	arr[++p]=sum;
 	  }
 	 big1=big1->next; 
    }
    if(carry>0)
   arr[++p]=carry;
   printf("\n");
 }
 for(int i=p;i>=0;i--)
   {
      printf("%d",arr[i]);
   }

 
 	
 
 return 0;
}
void getter(big *list)
{int v;
	printf("Enter the val(enter 0 to terminate) \n");
	scanf("%d",&v);
	if(v==-1)
	  {
	    list->val=-1; 
	    list->next=NULL;
      }
	else
	  {
	  	list->val=v;
	  	list->next=(big *)malloc(sizeof(big));
	  	getter(list->next);
	  }
   return;	
}
void display(big *list)
{
	if(list->next==NULL)
	  return;
	else
	  {
	  	printf("%d",list->val);
	  	display(list->next);
	  }
  
}
int count(big *list)
{int cnt=1;
 //printf("we r inside");
  if(list->val==-1)
     cnt=0;
  else
   {
   while(!(list->next)==NULL)
    {
       cnt++;	
    	list=list->next;
    }	  
    
   }
   return (cnt-1);
}