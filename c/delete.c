// deletion in array
#include<stdio.h>
#include<stdlib.h>
int Delete(int a[],int n,int num)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==num)
		{count++;
			for(int j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			i--;
		}
	}
return count;
}
int main(int argc,char *argv[])
{
	int a[argc];
	int j=0;
	for(int i=0;i<argc;i++)
	{
		a[j]=atoi(argv[i]);
		j++;
	}
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	int count=0;
	count=Delete(a,j,num);
	printf("Array after deletion\n");
	for(int i=1;i<argc-count;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}
