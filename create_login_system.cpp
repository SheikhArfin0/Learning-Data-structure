#include <iostream>
#include <string>
using namespace std;
struct User {
    string user_id;
    string password;
};
User users[1000];
int user_count = 0;

void create_user() {
    cout << "Enter a user id: ";
    cin >> users[user_count].user_id;
    cout << "Enter a password: ";
    cin >> users[user_count].password;
    user_count++;
    cout<<"User created ."<<endl;
}

bool authenticate(string user_id, string password) {
    for (int i = 0; i < user_count; i++) {
        if (users[i].user_id == user_id && users[i].password == password) {
            return true;
        }
    }
    return false;
}
void delete_user(string user_id,string password){
    for(int i=0;i<user_count;i++){
        if(users[i].user_id == user_id && users[i].password == password){
            users[i]=users[user_count-1];
            user_count--;
            cout<<"Users delete done ."<<endl;
            return;
        }
    }
    cout<<"User not found ."<<endl;
}
void login() {
    string user_id, password;
    cout << "Enter your user id: ";
    cin >> user_id;
    cout << "Enter your password: ";
    cin >> password;

    if (authenticate(user_id, password)) {
        cout << "Login successful." << endl;
    } else {
        cout << "Invalid user id or password. Please try again." << endl;
    }
}
int main() {
    int n;
    while (true) {
        cout << "\n1. Create a new user" << endl;
        cout << "2. Authenticate a user" << endl;
        cout << "3. Delete user" << endl;
        cout << "Enter your choice: ";
        cin >> n;

        if (n == 1) {
            create_user();
        } 
        else if (n == 2) {
            login();
        } 
        else if (n == 3) {
            string user_id, password;
            cout << "Enter user id: ";
            cin >> user_id;
            cout << "Enter password: ";
            cin >> password;
            delete_user(user_id, password); 
        } 
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}