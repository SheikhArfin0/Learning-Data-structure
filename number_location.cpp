
#include<iostream>
using namespace std;

int main()
{
	int A[25],n,i,x;
	cout<<"Enter the element number: ";
	cin>>n;
	cout<<"Enter the elements:  ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the target element: ";
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(A[i]==x)
		{
			cout<<x<<" is found"<<" & it's location is "<<i+1<<"."<<endl;
			break;
		}
	}
	if(i>=n)
	{
		cout<<x<<" its not found."<<endl;
	}
	return 0;
}
