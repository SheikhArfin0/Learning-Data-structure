
#include<iostream>
using namespace std;

int main()
{
	int m[4][4],i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			m[i][j]=0;
		}
	}
	m[0][1]=m[1][0]=20;      //m[0][1] its refers to first row secound column;m[1][0] second row first column;
	m[0][2]=m[2][0]=30;     //m[0][2] first row third column;m[2][0] third row first column;
	m[1][3]=m[3][1]=15;     //m[1][3] second row & fourth column;m[3][1]fourth row second column;
	m[2][3]=m[3][2]=16;   //m[2][3] third row fourth column;m[3][2] fourth row third column;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<m[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

