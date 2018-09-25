// maximum and minimum element of array 
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
	for(int i=0;i<argc-1;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Minimum element of array = %d\n",min);
	printf("Maximum element of array = %d\n",max);
return 0;
}
