#include<stdio.h>
#include<stdlib.h>
void Reverse(int a[],int s,int r)
{
	if(s<r)
	{
		int temp=a[s];
		a[s]=a[r];
		a[r]=temp;
		s++;
		r--;
		Reverse(a,s,r);
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
	Reverse(a,0,argc-2);
	for(int i=0;i<argc-1;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}

