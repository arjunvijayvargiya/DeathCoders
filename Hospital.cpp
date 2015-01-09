#include<stdio.h>
#include<stdlib.h>
#include<process.h>
/*

  AUTHOR :Arjun Vijayvargiya
  DESCRIPTION:Problem solved by the Author


*/
struct hos
{
  	int tok;
  	int pri;
  	hos *next;
	
}*front,*rear;
void insert(int,int);
void display();
void create();
void doctor();
void del(hos *,hos *);
int main()
{front=(hos *)malloc(sizeof(hos));
 rear=(hos *)malloc(sizeof(hos));
 create();
 int token,pr;
while(1)
{
  printf("enter queue val in the order or enter 0 token to terminate \n");
  scanf("%d %d",&token,&pr);
  if(token==0)
    break;
   else
    insert(token,pr);
}	
	
display();
printf("\n");
doctor();
	
	return 0;
}
void create()
{
	front=NULL;
	rear=NULL;
}
void insert(int a,int b)
{
	if(front==NULL && rear==NULL)
	 {
	 	hos *ptr=(hos *)malloc(sizeof(hos));
	 	ptr->tok=a;
	 	ptr->pri=b;
	 	front=ptr;
	 	rear=ptr;
	 	ptr->next=NULL;
	 }
	 else
	 {
	 	hos *ptr=(hos *)malloc(sizeof(hos));
	 	ptr->tok=a;
	 	ptr->pri=b;
	 	ptr->next=NULL;
	 	rear->next=ptr;
	 	rear=ptr;
	 }
	
}
void display()
{hos *p=(hos *)malloc(sizeof(hos));
	p=front;
	while(p!=NULL)
	{
		printf("->%d,%d",p->tok,p->pri);
		p=p->next;
	}
}
void doctor()
{int total=0;
 int c=0;
 int m=0;
 int s=0;
 hos *p=(hos *)malloc(sizeof(hos));
 hos *prev=(hos *)malloc(sizeof(hos));
 
  while(total<10)
	{p=front;
     prev=front;
		while(p!=NULL && s<3)
		{
			if(p->pri==1)
			  {
			   printf("%d \n",p->tok);
			   
			   //printf("s=%d m=%d c=%d \n",s,m,c);	
			   s++;
			   total++;	
			   del(prev,p);
			   //display();
			  }
			prev=p;
			p=p->next;
			
		}
		
	  
	  s=0;
	  p=front;
	  prev=front;
	  
		while(p!=NULL && m<2)
		{
			if(p->pri==2)
			  {
			   printf("%d \n",p->tok);	
			   //printf("s=%d m=%d c=%d \n",s,m,c);
			   m++;
			   total++;
			   del(prev,p);
			   //display();
			  }
			prev=p;
			p=p->next;
		}
		
	 
	  m=0;
	  p=front;
	  prev=front;
	  
		while(p!=NULL && c<1)
		{
			if(p->pri==3)
			  {
			   printf("%d \n",p->tok);	
			   //printf("s=%d m=%d c=%d \n",s,m,c);
			   c++;
			   total++;
			   del(prev,p);
			   //display();
			  }
			prev=p;
			p=p->next;
		}
		
	  //printf(" \n Total=%d \n",total);
	  c=0;
	  p=front;
	  prev=front;	
	}
	


}
void del(hos *prix,hos *curr)
{
	if(prix==curr)
	 front=front->next;
	else if(curr->next==NULL)
	  prix->next=NULL;
	else if(curr==(front->next))
	  front->next=(front->next)->next;
	else
	  prix->next=curr->next;
	
}
