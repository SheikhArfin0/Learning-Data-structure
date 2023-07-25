
#include <iostream>
using namespace std;


int main(){
    int k = 9;
    int nums[k] = {0, 1, 3, 4, 5, 6, 7, 8, 10},temp[k]; 
    
   	cout << "Original Ascending array: ";
    for (int i=0; i < k; i++) 
    cout << nums[i] <<" ";
    
    cout<<endl;
    int small=0,l=1;
    
    for(int i=0;i<k;i++){
        
            if(i%2==0||i==0){
                temp[i]=nums[k-l];
                k++;
            }else{
                temp[i]=nums[small];
                small++;
            }
        
    }

    for(int i=0;i<k;i++){
        cout<<temp[i]<<" ";
    }

     
}
