 #include<iostream>
#include<stack>
using namespace std;
class log{
public:
    string name;
    string number;
    float time;

    void setData(string k, string num, float ti){
        name = k;
        number = num;
        time = ti;
    }
    
    void dtl(){
        cout << "Name : "<<name<<"\nNumber : "<<number<<"\tTime:"<<time<<endl;
    }
};
int main(){
    int m;
    cout<<"How many numbers to save :- ";
    cin>>m;
    log* l = new log[m];
    stack<log> st;
    string k, num;
    float ti;
    for (int i = 0; i < m; i++){
        cout<<"Name : ";
        cin >> k;
        cout<<"Number: ";
        cin>>num;
        cout<<"Time: ";
        cin>>ti;
        l[i].setData(k,num,ti);
        st.push(l[i]);
    }

    cout<<"Call Log"<<endl;
    for (int i = 0; i < m; i++){
        log m=st.top();
        m.dtl();
        st.pop();
        cout<<endl;
    }

}
