//SECOND SMALLEST ELEMENT
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
	int max=a[0];
	int max2=0;
	for(int i=0;i<n;i++)
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
	cout<<"Second largest element of array = "<<max2<<endl;
return 0;
}
