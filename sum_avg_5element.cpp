
#include<iostream>
using namespace std;

int main()
{
	int A[5],i;
	float sum=0,avg;
	cout<<"Enter the 5 elements of the array: "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<5;i++)
	{
		sum+=A[i];
	}
	avg=sum/5;
	cout<<"Your inputed array is "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
	cout<<"The summation of the 5 element "<<sum<<endl;
	cout<<"The average of the 5 "<<avg<<endl;
	return 0;
}
