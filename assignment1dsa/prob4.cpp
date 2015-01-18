#include<stdio.h>
#include<stdlib.h>
struct node
{
	char c;
	int count;
	node *next;
	
}*head,*cur;
void create(node *ptr,node *curr)
{
	ptr=NULL;
	curr=NULL;
}
void insert(char ch)
{//printf("inside \n");
	if(head==NULL)
	{//printf("inside 1\n");
	 node *ptr=(node *)malloc(sizeof(node));
		ptr->c=ch;
		ptr->count=1;
		ptr->next=NULL;
		head=ptr;
		cur=ptr;
		//printf("%d",head->count);
	}
	else
	{node *ptr=(node *)malloc(sizeof(node));
		ptr->c=ch;
		ptr->count=1;
		ptr->next=NULL;
		cur->next=ptr;
		cur=ptr;
		//printf("cur->%c",cur->c);
	}
	
}
void display(node *root)
{//printf("inside \n");
      if(root==NULL)
	     return;	
	   else
	   { printf("%c %d \n",root->c,root->count);
		 display(root->next);
        }
	
}
int main()
{char str[80];
//	char str[]="google india )";
  printf("enter the string \n");
  gets(str);
  
    head=NULL;
	cur=NULL;
	
	int i=0;
	while(str[i]!='\0')
	{int res=0;
	
	 node *iter=head;
		while(iter!=NULL)
		{
			if((iter->c)==str[i])
			{
				(iter->count)++;
				res=1;
				break;
			}
			iter=iter->next;
		}
		if(res==0)
		{
			insert(str[i]);
		}
		
		i++;
		
	}
	display(head);
	return 0;
}
