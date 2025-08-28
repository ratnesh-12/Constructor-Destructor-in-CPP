#include <iostream>
using namespace std;

class calender{

    int day;
    int month;
    int year;

public:
    calender();
    void display();

};
calender::calender(){
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter year: ";
    cin>>year;
}
void calender::display(){
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
}

int main() {
    calender cal;
    cal.display();
    return 0;
}