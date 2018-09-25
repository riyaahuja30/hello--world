// occurence of each element and remove duplicacy
#include<stdio.h>
#include<stdlib.h>
void Duplicate(int a[],int n)
{
	int count=0;
	int c[n];
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	c[i]=count;
		for(int k=0;k<i;k++)
		{
			if(a[i]==a[k])
			{
				c[i]=0;
			}
		}
	}
	for(int i=1;i<n;i++)
	{
		if(c[i]>=1)
		{
			printf("%d occurs %d times\n",a[i],c[i]);
		}
	}
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
	Duplicate(a,j+1);
return 0;
}
	
