// Selection;insertion;bubble;Binary search;

#include <iostream>

using namespace std;

 

struct student
{
    string name;
    string id;
    float cgpa;
}stu;
class sort{
public:
    void bubble( student stu[],int n){
        for(int i= 0; i<n; i++){
            for(int j = 0; j<(n-i-1);j++){
                if(stu [j].cgpa>stu[j+1].cgpa){
                    swap(stu[j],stu[j+1]);
                }
            }
        }
        cout<<"Bubble sort"<<endl <<endl;
        for(int i=0; i<n; i++){
        cout<<"Student Name :" <<stu[i].name<<" "<<endl;
        cout<<"Student Id :"  <<stu[i].id<<" "<<endl;
        cout<<"Student Cgpa :"<<stu[i].cgpa<<" "<<endl;
    }

 

}
void selection(student stu[],int n){
     for(int i= 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(stu [i].cgpa>stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }
            }
            cout<<"Selection sort"<<endl <<endl;
            for(int i = 0; i<n; i++){
               cout<<"Student Name :" <<stu[i].name<<" "<<endl;
        cout<<"Student Id :"  <<stu[i].id<<" "<<endl;
        cout<<"Student Cgpa :"<<stu[i].cgpa<<" "<<endl;
            }
        }
}
  void insertion (student stu[],int n){
      for(int i=1; i<n;i++){
            for(int j = i-1; j>=0;j--){
                if(stu[i].cgpa<stu[j].cgpa){
                    swap(stu[i],stu[j]);
                }
            }

 

      }
       cout<<"Insertion short"<<endl <<endl;
       for(int i = 0; i<n; i++){
               cout<<"Student Name :" <<stu[i].name<<" "<<endl;
               cout<<"Student Id :"  <<stu[i].id<<" "<<endl;
               cout<<"Student Cgpa :"<<stu[i].cgpa<<" "<<endl;
            }
    
   }

  
  void binary(student stu[],int n){
  	 int m=0;
  	 float t;
  	 cout<<"The Number of search :";
  	 cin>>t;
  	 for(int i=0;i<=(n-2);i++){
  	 	if(stu[i].cgpa<stu[i+1].cgpa){
  	 		t++;
		   }
		   else break;
	   }
	   if(m==n-1){
	   	int first=0;
	   	int last=n-1;
	   	int mid;
	   	while(first<=last){
	   		mid=(last+first)/2;
	   		if(t==stu[mid].cgpa){
	   			cout<<"Student Name :" <<stu[mid].name<<" "<<endl;
               cout<<"Student Id :"  <<stu[mid].id<<" "<<endl;
               cout<<"Student Cgpa :"<<stu[mid].cgpa<<" "<<endl;
               break;
			   }
			   if(m>stu[mid].cgpa){
			   	first=mid+1;
			   }
			   else{
			   	last=mid-1;
			   }
		   }
		   cout<<"Element not found";
	   }
	  cout<<"Not Started";
  }
};

 

 

 

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
    sort st;
    int f;
    cout << "Which sorting algorithm do you want to use?" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Binary Sort" << endl;
    cout<<"Enter your choice"<<endl;
    cin>>f;
    
    if(f==1){
    	st.bubble(stu,s1);
	}
    else if(f==2){
    	st.selection(stu,s1);
	}
	else if(f==3){
		st.insertion(stu,s1);
	}
  else if(f==4){
   	st.binary(stu,s1);
	}

    return 0;
}
