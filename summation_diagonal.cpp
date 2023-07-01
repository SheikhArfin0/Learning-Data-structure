#include<iostream>
using namespace std;

int main()
{
	int a[25][25],n,i,j,sum=0;;
	cout<<"Enter the number of row & Column: ";
	cin>>n;
	cout<<"Enter the element : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||i+j==n-1)
			{
				sum+=a[i][j];
			}
		}
	}
	cout<<"The summation of diagonal elements :0 "<<sum<<endl;
	return 0;
}
