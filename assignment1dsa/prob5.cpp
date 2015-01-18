#include<stdio.h>
int a[2][2];
int chkmaxrow(int,int);
int chklowcol(int,int);
int main()
{printf("enter the values of matrix \n");
	for(int i=0;i<2;i++)
	{
	   for(int j=0;j<2;j++)
	     scanf("%d",&a[i][j]);
	
	}
	for(int i=0;i<2;i++)
	{printf("\n");
	   for(int j=0;j<2;j++)
	     printf("%d ",a[i][j]);	
	}
	printf("\n");
	int cor[2][2]={0};
	for(int i=0;i<2;i++)
	{
	   for(int j=0;j<2;j++)
	     {
	          int res1=chkmaxrow(i,j);
			  int res2=chklowcol(i,j);	
	     	  if(res1==1 && res2==1)
			    cor[i][j]=1;
	     }	
	}
	for(int i=0;i<2;i++)
	{
	   for(int j=0;j<2;j++)
	     {
	         if(cor[i][j]==1)
	           printf("%d,%d is a saddle point \n",i,j);
	     }	
	}
	
	
	
	
	return 0;
}
int chkmaxrow(int w,int v)
{int res=0;
	int max=a[w][0];
	for(int p=0;p<2;p++)
	{
		if(a[w][p]>max)
		  max=a[w][p];
		
	}
	if(max==a[w][v])
	  res=1;
return res;
}
int chklowcol(int w,int v)
{int res=0;
	int min=a[0][v];
	for(int p=0;p<2;p++)
	{
		if(a[p][v]<min)
		  min=a[w][p];
	}
	if(min==a[w][v])
	  res=1;
return res;
}
