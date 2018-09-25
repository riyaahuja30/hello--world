//rotation of elements
#include<stdio.h>
#include<stdlib.h>
void Rotate(int a[],int n,int num)
{
	for(int i=0;i<num/2;i++)
	{
		int temp=a[i];
		a[i]=a[num-1-i];
		a[num-1-i]=temp;
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
	int num;
	printf("Enter the no of rotation\n");
	scanf("%d",&num);
	Rotate(a,j,num);
	printf("After rotating array elements till num\n");
	for(int i=0;i<j;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}
		
