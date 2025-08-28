#include <iostream>
using namespace std;

class student{
    int roll_no;
    char name[50];
    double fee;

    public:
    student(){  
        cout<<"Enter roll no: ";
        cin>>roll_no;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter fee: ";
        cin>>fee;
    }
    void display(){
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Fee: "<<fee<<endl;
    }
};

int main() {
    student s;  
    s.display();  
    return 0;
}
