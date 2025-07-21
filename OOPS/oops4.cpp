// polymorphism

#include <iostream>
using namespace std;

// 1. compile time polymorphism
// constructor overloading 
// class student {
// public:
//     string name;

//     student() {
//         cout << "Default constructor called" << endl;
//     }
//     student(string n) {
//         this->name = n;
//         cout << "Parameterized constructor called for " << name << endl;
//     }
// };
// // function overloading
// class print{
// public:
//     void show(int a) {
//         cout << "Integer: " << a << endl;
//     }
//     void show(char b) {
//         cout << "Character : " << b << endl;
//     }
    
// };
//operator overloading


// 2. run time polymorphism
// function overriding
// class parent{
// public:
//     void getinfo() {
//         cout << "Parent class show function" << endl;
//     }
// };
// class child : public parent {
// public:
//     void getinfo() {
//         cout << "Child class show function" << endl;
//     }
// };
// virtual function
class parent{
public:
    void getinfo() {
        cout << "Parent class show function" << endl;
    }
    virtual void hello() {
        cout << "Hello from parent" << endl;
    }
};
class child : public parent {
public:
    void getinfo() {
        cout << "Child class show function" << endl;
    }
    void hello() {
        cout << "Hello from child" << endl;
    }
};



int main() {
    // student s1; // Default constructor
    // student s2("John"); // Parameterized constructor
    // cout << "Student 1: " << s1.name << endl;
    // cout << "Student 2: " << s2.name << endl;

    // print p;
    // p.show(5); // Calls show(int)
    // p.show('A'); // Calls show(char)

    // parent p;
    // child c;
    // p.getinfo(); // Calls parent class function
    // c.getinfo(); // Calls child class function

    child c;
    c.hello(); // Calls child class hello function

    return 0;
}
