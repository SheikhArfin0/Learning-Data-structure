#include <iostream>
using namespace std;

struct student {
    string name;
    string id;
    float cgpa;
};

void bubbleSort(student stu[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            if (stu[j].cgpa > stu[j + 1].cgpa) {
                swap(stu[j], stu[j + 1]);
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

    bubbleSort(stu, s1);

    cout << "Sorted student records by CGPA:" << endl;
    for (int i = 0; i < s1; i++) {
        cout << "Student Name: " << stu[i].name << endl;
        cout << "Student ID: " << stu[i].id << endl;
        cout << "Student CGPA: " << stu[i].cgpa << endl;
    }


    return 0;
}

