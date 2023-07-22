#include <iostream>
using namespace std;

struct student {
	string name;
    string id;
    float cgpa;
};
 void insertion (student stu[],int n){
      for(int i=1; i<n;i++){
            for(int j = i-1; j>=0;j--){
                if(stu[i].cgpa<stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }
            }
    }
}
int main() {
    int s1;
    cout << "How many students: ";
    cin >> s1;

    student* stu = new student[s1];

    cout << "Give input:" << endl;
    for (int i = 0; i < s1; i++) {
        cout << "Student name: ";
        cin >> stu[i].name;
        cout << "Student ID: ";
        cin >> stu[i].id;
        cout << "Student CGPA: ";
        cin >> stu[i].cgpa;
    }
    insertion(stu, s1);
    cout<<"Insertion short"<<endl <<endl;
       for(int i = 0; i<s1; i++){
               cout<<"Student Name :" <<stu[i].name<<" "<<endl;
               cout<<"Student Id :"  <<stu[i].id<<" "<<endl;
               cout<<"Student Cgpa :"<<stu[i].cgpa<<" "<<endl;
            }
            return 0;
        }
