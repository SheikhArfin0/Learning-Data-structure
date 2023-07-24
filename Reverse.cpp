#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a;
cout<<"Enter your array size : ";
cin>>a;

int array[a];
cout<<"Enter the array elements :"<<"\n";

for(int i=0; i<a; i++)
{
  cout<<"array["<<i<<"]=";
  cin>>array[i];
}
cout<<"\n";

cout<<"Array elements are : ";
for(int i=0; i<a; i++)
{
 cout<<array[i]<<"   ";
}
cout<<"\n"<<"\n";
cout<<"Reverse array elements are : ";

for(int i=a-1; i>=0; i--)
{
 cout<<array[i]<<"   ";
}

getch();
}
