// name,number,roll,grading system;
#include<iostream>
using namespace std;
int main()
{
	struct student
	{
		int roll;
		char name[50];
		float marks;
	};
	student stu[20];
	int n,i;
	cout<<"Enter the Numbers of Student: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Student Roll: ";
		cin>>stu[i].roll;
		cout<<"Enter the Student Name: ";
		getchar();
		gets(stu[i].name);
		cout<<"Enter the Student Mark: ";
		cin>>stu[i].marks;
	}
	cout<<endl<<"Roll\tName\tMark\tGrade"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<stu[i].roll<<"\t";
		cout<<stu[i].name<<"\t";
		cout<<stu[i].marks<<"\t";
		 if(stu[i].marks>=90)
			cout<<"A+";
		else if(stu[i].marks>=86)
			cout<<"A";
		else if(stu[i].marks>=82)
			cout<<"B+";
		else if(stu[i].marks>=80)
			cout<<"B";
		else if(stu[i].marks>=70)
			cout<<"C+";
		else if(stu[i].marks>=66)
			cout<<"C";
		else if(stu[i].marks>=62)
			cout<<"C-";
		else if(stu[i].marks>=58)
			cout<<"D+";
		else if(stu[i].marks>=54)
			cout<<"D";
		else if(stu[i].marks<50)
			cout<<"F";
		cout<<endl;
	}
	return 0;
}
