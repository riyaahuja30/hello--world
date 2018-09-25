// MATRIX ADDITION,MATRIX SUBTRACTION,MATRIX DIVISION AND MATRIX MULTIPLICATION
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	int c[n][n];
	int d[n][n];
	int e[n][n];
	int f[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);//MATRIX A
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);//MATRIX B
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];//ADDITION OF MATRIX A AND B
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			d[i][j]=a[i][j]-b[i][j];//MATRIX SUBTRACTION
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			e[i][j]=a[i][j]/b[i][j];//MATRIX DIVISION
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{f[i][j]=0;
			for(int k=0;k<n;k++)
			{
				f[i][j]=f[i][j]+(a[i][j]*b[j][k]);//MATRIX MULTIPLICATION
			}
		}
	}
	printf("MATRIX ADDITION\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}
	printf("MATRIX SUBTRACTION\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",d[i][j]);
		}printf("\n");
	}
	printf("MATRIX DIVISION\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",e[i][j]);
		}printf("\n");
	}
	printf("MATRIX MULTIPLICATION\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",f[i][j]);
		}printf("\n");
	}
return 0;
}
