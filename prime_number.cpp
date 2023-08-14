#include<iostream>
using namespace std;
int main()
{
    int num, i, count = 0 ;
    cout<<"Enter positive number: ";
    cin>>num;

    for ( i = 2; i < num; i++ )
    {
        if ( num % i == 0 )
        {
            count++;
            break;
        }
    }
    if (  count == 0 )
        cout<<"prime mumber";
    else
        cout<<"not prime number";

    return 0;
}
