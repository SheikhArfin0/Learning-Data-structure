#include<iostream>
using namespace std;
int main()
{
	int i,j,k,c=0;      //c student number
	float Q[4],min,sum,avg;  //Q score the quiz score
	for(i=0;i<5;i++)
	{
		sum=0;
		cout<<"Marks for student "<<++c<<": ";
		for(j=0;j<4;j++)
		{
			cin>>Q[j];
			sum+=Q[j];
		}
		min=Q[0];
		for(k=1;k<4;k++)
		{
			if(min>Q[k])
			{
				min=Q[k];
			}
		}
		avg=(sum-min)/3;
		cout<<"Average of best three quizzes is :"<<avg<<endl;
	}
	return 0;
}

