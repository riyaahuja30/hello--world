// insertion in array
#include<stdio.h>
#include<stdlib.h>
void Insert(int a[],int n,int pos,int num)
{
	for(int i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=num;
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
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	Insert(a,j+1,pos,num);
	printf("Array after insertion\n");
	for(int i=1;i<argc;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}
