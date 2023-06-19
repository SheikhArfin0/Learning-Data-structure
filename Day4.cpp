#include<iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"Enter 10 Array Elements:";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"The Reverse of Given Array is:";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
