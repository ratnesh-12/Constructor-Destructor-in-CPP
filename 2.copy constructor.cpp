#include<iostream>
using namespace std;

class book {
    string book_name;
    string author_name;
    double price;
public:
    book(string b, string a, double p) { 
        book_name = b;
        author_name = a;
        price = p;
    }
    book(const book &b) { 
        book_name = b.book_name;
        author_name = b.author_name;
        price = b.price;
        cout << "Copy constructor called!" << endl;
    }
    void display() {
        cout << "Book Name: " << book_name << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    string book_name;
    string author_name;
    double price;
    
    cout<<"Enter book details"<<endl;
    cout << "Book Name: ";
    cin>>book_name; 
    cout << "Author Name: ";
    cin>>author_name; 
    cout << "Price: $";
    cin >> price;
    
    book b1(book_name, author_name, price);  
    book b2 = b1;                             
    
    cout << "\nOriginal book:" << endl;
    b1.display();
    cout << "\nCopied book:" << endl;
    b2.display();
    
    return 0;
}

OUTPUT:
Enter book details
Book Name: wimpy_kid
Author Name: jeff_kinney
Price: $25
Copy constructor called!

Original book:
Book Name: wimpy_kid
Author Name: jeff_kinney
Price: $25

Copied book:
Book Name: wimpy_kid
Author Name: jeff_kinney
Price: $25

=== Code Execution Successful ===
