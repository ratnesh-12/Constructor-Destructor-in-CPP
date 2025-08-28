#include<iostream>
using namespace std;

class student {
    int roll_no;
    string name;
    double fee;
public:
    student(string n, int r, double f) { 
        name = n;
        roll_no = r;
        fee = f;
    }
    student(const student &s) { 
        name = s.name;
        roll_no = s.roll_no;
        fee = s.fee;
        cout << "Copy constructor called!" << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Fee: " << fee << endl;
    }
};

int main() {
    string name;
    int roll;
    double fee;
    
    cout << "Enter student details" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Roll No: ";
    cin >> roll;
    cout << "Fee: ";
    cin >> fee;
    
    student s1(name, roll, fee);  
    student s2 = s1;               
    
    cout << "\nOriginal student:" << endl;
    s1.display();
    cout << "\nCopied student:" << endl;
    s2.display();
    
    return 0;
}

OUTPUT:
Enter student details
Name: ratnesh
Roll No: 21
Fee: 350000
Copy constructor called!

Original student:
Name: ratnesh
Roll No: 21
Fee: 350000

Copied student:
Name: ratnesh
Roll No: 21
Fee: 350000

=== Code Execution Successful ===
