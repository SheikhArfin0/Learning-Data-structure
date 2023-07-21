#include <iostream>
using namespace std;

 

struct student
{
    string name;
    string id;
    float cgpa;
};
void selection(student stu[],int n){
     for(int i= 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(stu [i].cgpa>stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }
            }
    }
}
int main()
{
    int s1;
    cout<< "How many student :";
    cin >> s1;

 
          cout<<"Give input :"<<endl;
    student* stu = new student[s1];

 

    for(int i =0;i<s1;i++){
    cout << "student  name: ";
    cin >> stu[i].name;
    cout << "student roll number: ";
    cin >> stu[i].id;
    cout << "student CGPA: ";
    cin >> stu[i].cgpa;
    }
     selection(stu, s1);
     cout<<"Selection sort"<<endl <<endl;
            for(int i = 0; i<s1; i++){
               cout<<"Student Name :" <<stu[i].name<<" "<<endl;
        cout<<"Student Id :"  <<stu[i].id<<" "<<endl;
        cout<<"Student Cgpa :"<<stu[i].cgpa<<" "<<endl;
            }
            
            return 0;
        }

    
