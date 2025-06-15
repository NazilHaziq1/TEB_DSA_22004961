#include <iostream>
#include <string>

using namespace std;

struct student {
    int id;
    char Name[50]; 
    int phonenumber;
    string email;
};

int main() {
    student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << (i + 1) << ":\n";

        cout << "ID: ";
        cin >> students[i].id;

        cout << "Name: ";
        cin.ignore(); 
        cin.getline(students[i].Name, 50);

        cout << "Phone number: ";
        cin >> students[i].phonenumber;

        cout << "Email: ";
        cin >> students[i].email;

        cout << "\n";
    }
    cout << "Entered student details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ":\n";
        cout << "ID: " << students[i].id << "\n";
        cout << "Name: " << students[i].Name << "\n";
        cout << "Phone: " << students[i].phonenumber << "\n";
        cout << "Email: " << students[i].email << "\n\n";
    }

    return 0;
}
