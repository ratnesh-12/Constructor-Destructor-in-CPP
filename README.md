# Constructor-Destructor-in-CPP

# Experiment 1: Copy Constructor

# Aim
To create a class that demonstrates a copy constructor.

# Theory
A copy constructor initializes a new object using an already existing object of the same class. It is useful when we want to duplicate an object with the same values. If we do not define one, C++ automatically provides a default copy constructor, but writing our own helps us understand and control object copying.

# Code:
```
class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }
};
```
# Experiment 2: Destructor

# Aim
To demonstrate how a destructor works in C++.

# Theory
A destructor is a special function that is called automatically when an object is destroyed or goes out of scope. It is mainly used for cleanup, such as releasing memory or closing files. It has the same name as the class, prefixed with ~, and does not take arguments or return values.

# Code:
```
class Car {
public:
    Car() {
        cout << "Car object created." << endl;
    }

    ~Car() {
        cout << "Car object destroyed." << endl;
    }
};
```
# Experiment 3: Inside-Class Default Constructor

# Aim
To define a default constructor inside the class to initialize values.

# Theory
A default constructor has no parameters and is automatically called when an object is created without arguments. Defining it inside the class makes the code simple and allows direct initialization of members.

# Code:
```
class Rectangle {
public:
    int length, width;

    // Default constructor inside the class
    Rectangle() {
        length = 0;
        width = 0;
    }
};
```
# Experiment 4: Outside-Class Default Constructor

# Aim
To define a default constructor outside the class using the scope resolution operator.

# Theory
C++ allows writing the constructor inside or outside the class. When written outside, we use the scope resolution operator :: to link the function definition with the class. This helps in separating declaration and definition, making the code cleaner for larger programs.

# Code:
```
class Calculator {
public:
    int num1, num2;

    // Constructor declared inside, defined outside
    Calculator();
};

// Default constructor defined outside the class
Calculator::Calculator() {
    num1 = 0;
    num2 = 0;
}
```
# Experiment 5: Parameterized Constructor

# Aim
To create a class with a parameterized constructor that initializes objects with user-defined values.

# Theory
A parameterized constructor takes arguments, allowing us to pass custom values at the time of object creation. This reduces the need for setter functions and makes code shorter and easier to read.

# Code:
```
class Cube {
public:
    int side;

    // Parameterized constructor
    Cube(int s) {
        side = s;
    }

    int volume() {
        return side * side * side;
    }
};
```
# Conclusion

o From these experiments, we learned:

o Copy constructors duplicate objects safely.

o Destructors handle cleanup automatically when an object is destroyed.

o Default constructors (inside or outside the class) provide initial values to objects.

o Parameterized constructors let us pass custom values at object creation.

o Together, these experiments show how constructors and destructors control the lifecycle of objects and simplify initialization and cleanup in C++.
