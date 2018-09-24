#include<stdio.h>
int main(int argc ,char *argv[])
{
	printf("Program name is %s\n",argv[0]);
	printf("No of arguments is %d\n",argc);
	for(int i=0;i<argc;i++)
	{
		printf("%s",argv[i]);
	}
return 0;
}

