#include<stdio.h>
#include<ctype.h>
int main()
{
	int num,n,n2;
	int ans[50];
	int h=0;
	printf("enter the number(to convert to binary) \n");
	scanf("%d",&num);
	printf("Binary Presentation is here: \n");
	n=num;
	while(n!=0)
	{//printf("#");
		int x=n%2;
		ans[h]=x;
		h++;
		n=n/2;	
	}
	h=h-1;
	while(h>=0)
	{
		printf("%d",ans[h]);
		h--;
	}
	printf("\n Hexadecimal presentation is here \n");
	n2=num;
	char y[50];
	int j=0;
	while(n2!=0)
	{//printf("#");
		int k=n2%16;
		if(k>9)
		{
			switch(k)
			{
				case 10:y[j]='a';
		                j++;
		                break;
		        case 11:y[j]='b';
		                j++;
		                break;
				case 12:y[j]='c';
		                j++;
		                break;
		        case 13:y[j]='d';
		                j++;
		                break;
		        case 14:y[j]='e';
		                j++;
		                break;
		        case 15:y[j]='f';
		                j++;
		                break;
			}
			
		}
		else
		{
		y[j]=k;
		j++;
	    }
		n2=n2/16;	
	}
	j=j-1;
	printf("0x");
	while(j>=0)
	{if(isalpha(y[j]))
	    printf("%c",y[j]);
	 else
	    printf("%d",y[j]);
		
		j--;
	}
	return 0;
}
