#include<iostream>
using namespace std;
int main()
{
	int array[4][3] ={{3,5,6},{7,8,9},{1,2,3},{2,6,4}};
	
	for(int k=0;k<4;++k)
	{
		for(int j=0;j<3;++j)
		{
			cout<<array[k][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
