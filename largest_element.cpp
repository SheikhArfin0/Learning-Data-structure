#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Number of elements: ";
        cin>>a;
    int arr[a];

    cout<<"Elements : " ;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    
    int max=0;
    for(int k=0;k<a;k++){
        if (max < arr[k]){
            max=arr[k];
        }
    }
    cout<<"Maximum value : "<<max<<endl;
}
