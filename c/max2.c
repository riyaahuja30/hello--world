// second largest and second smallest  element of array 
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a[argc];
	int j=0;
	for(int i=1;i<argc;i++)
	{
		a[j]=atoi(argv[i]);
		j++;
	}
	int min=a[0];
	int max=a[0];
	int min2=a[0];
	int max2=a[0];
	for(int i=0;i<j;i++)
	{
		if(a[i]<min)
		{
			min2=min;
			min=a[i];
		}
		else if(a[i]<min2)
		{
			min2=a[i];
		}
	}
	for(int i=0;i<j;i++)
	{
		if(a[i]>max)
		{
			max2=max;
			max=a[i];
		}
		else if(a[i]>max2)
		{
			max2=a[i];
		}
	}
	printf("Second smallest element of array = %d\n",min2);
	printf("Second largest element of array = %d\n",max2);
return 0;
}
