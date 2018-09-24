// Second smallest element
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min=a[0];
	int min2=0;
	for(int i=0;i<n;i++)
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
	cout<<"Second smallest element of array = "<<min2<<endl;
return 0;
}
