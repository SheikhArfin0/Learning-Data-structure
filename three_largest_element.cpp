#include<iostream>
using namespace std;
                                                    
int main(){

    int n;
    cout<<"Number of elements: ";
        cin>>n;
    int arr[n];

    cout<<"Elements : " ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lrg2,lrg3,lrg1;
    for (int j = 0; j < n; j++) {
        if (arr[j] > lrg1) {
            lrg3 = lrg2;
            lrg2 = lrg1;
            lrg1 = arr[j];
        } else if (arr[j] > lrg2 && arr[j] != lrg1) {
            lrg3 = lrg2;
            lrg2 = arr[j];
        } else if (arr[j] > lrg3 && arr[j] != lrg1 && arr[j] != lrg2) {
            lrg3 = arr[j];
        }
    }
    cout << "Three largest elements: " << lrg1 << " " << lrg2 << " " << lrg3 << std::endl;

    return 0;
}
