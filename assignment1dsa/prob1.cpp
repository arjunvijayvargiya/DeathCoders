#include<stdio.h>
int *zero_array(int *, int);
int main()
{int n;
	printf("enter the length of the array \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array-> \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int *x=&a[0];
	int *ptr=zero_array(x,n);
	int p=0;
	printf("printing the array using pointers \n");
	while(p<n)
	{
		printf("%d ",*ptr);
		ptr++;
		p++;
	}
	return 0;
}
int *zero_array(int *l,int len)
{int i=0;
  int *h=l;
	while(i<len)
	{
		*l=0;
		l++;
		i++;
	}
	return h;
}
