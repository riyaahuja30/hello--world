#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num;
	cout<<"Enter the no of rotation"<<endl;
	cin>>num;
	for(int i=0;i<num/2;i++)
	{
		int temp=a[i];
		a[i]=a[num-1-i];
		a[num-1-i]=temp;
	}
	cout<<"After rotating array elements till num"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"   ";
	}
return 0;
}
		
