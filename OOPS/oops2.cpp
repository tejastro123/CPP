// inheritance
// 1. single inheritance

#include <iostream>
#include <string>
using namespace std;

class person {
public:
    string name;
    int age;
    // constructor
    person(string n, int a) {
        this->name = n;
        this->age = a;
    }
    // default constructor
    person() {
        cout << "Default constructor called" << endl;
    }
    // destructor
    ~person() {
        cout << "Destructor called for " << name << endl;
    }
};

class student : public person {
public:
    int rollno;
    // constructor
    student(string n, int a, int r) : person(n, a) {
        this->name = n;
        this->age = a;
        this->rollno = r;
        cout << "Parametrized constructor called for student" << endl;
    }
    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
    // destructor
    ~student() {
        cout << "Destructor called for student " << name << endl;
    }
};

int main() {
    // Using the parametrized constructor
    student s1("John", 20, 101);
    s1.getinfo();
    
    // Using the default constructor
    person p2;
    p2.name = "Alice";
    p2.age = 22;
    cout << "Name: " << p2.name << ", Age: " << p2.age << endl;

    return 0;
}