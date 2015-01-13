#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node 
{
  char ch;
   struct node *next;
}*front,*rear;
void check(int a,int b);
void create();
void ccq(char c[],int g);
void display(int);
int main()
{   
    char str[100000];
    long n;
    
	front=(struct node *)malloc(sizeof(struct node));
	rear=(struct node *)malloc(sizeof(struct node));
	create();
	scanf("%s",str);
	ccq(str,strlen(str));
	//display(strlen(str));
	scanf("%d",&n);
	int a1[n],a2[n];
	for(long i=0;i<n;i++)
	{
		scanf("%d %d",&a1[i],&a2[i]);
	    
	}
	for(int i=0;i<n;i++)
	{
		
	    check(a1[i],a2[i]);
	}
	
	
	return 0;
}
void create()
{
	front=NULL;
	rear=NULL;
}
void ccq(char c[],int g)
{int i=0;
	while(c[i]!='\0')
	{
		if(front==NULL)
		{
		
		struct node *ptr=(struct node *)malloc(sizeof(struct node));
	    ptr->ch=c[i];
	    ptr->next=ptr;
	    front=ptr;
	    rear=ptr;
		}
		else
		 {
		 	struct node *ptr=(struct node *)malloc(sizeof(struct node));
		 	ptr->ch=c[i];
		 	rear->next=ptr;
		 	ptr->next=front;
		 	rear=ptr;
		 }
		
		i++;
	}
	
}
void display(int len)
{int i=0;
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr=front;
printf("\n");
	while(i<len)
	{
		printf("%c",ptr->ch);
		ptr=ptr->next;
		i++;
	}
}
void check(int a,int b)
{struct node *ptr=(struct node *)malloc(sizeof(struct node));
  ptr=front;
	int i=1;
	char ca,cb;
	while(i<b+1)
	{
		//printf("%c",ptr->ch);
		if(i==a)
		{
			ca=ptr->ch;
		}
		if(i==b)
		{
			cb=ptr->ch;
		}
		
		ptr=ptr->next;
		i++;
	}
	if(ca==cb)
	  printf("Yes \n");
	else
	  printf("No \n");
}