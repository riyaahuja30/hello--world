// SORTING IN ARRAY
#include<stdio.h>
#include<stdlib.h>
void Sort(int a[],int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(int argc,char *argv[])
{
	int a[argc];
	int j=0;
	for(int i=1;i<argc;i++)
	{
		a[j]=atoi(argv[i]);
		j++;
	}
	Sort(a,j);
	for(int i=0;i<j;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}
