#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
int i, n;
cout<<"Enter number of integer:"<<endl;
cin>>n;
int num[n];
cout<<"Enter integer:"<<endl;
for(i=0; i<n; i++){
    cin>>num[i];
}

for(i=0; i<n; i++)

    if (num[i]%2==0)
      cout<<"Even :"<< num[i]<<endl;

        else
      cout<<"Odd :"<< num[i]<<endl;

return 0;
}

