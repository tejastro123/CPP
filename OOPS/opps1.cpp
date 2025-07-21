// objects and classes
#include <iostream>
#include <string>
using namespace std;

class teacher {
private:
    double salary;
public:
    // parametrized constructor
    teacher(string n, string d, string s, double sal){
        this->name = n;
        this->dept = d;
        this->subject = s;
        this->salary = sal;
        cout << "Parametrized constructor called" << endl;
    }
    // copy constructor 
    teacher(teacher &t) {
        this->name = t.name;
        this->dept = t.dept;
        this->subject = t.subject;
        this->salary = t.salary;
        cout << "Copy constructor called" << endl;
    }
    // attributes
    string name;
    string dept;
    string subject;

    // methods/member functions
    void changedept(string newdept) {
        dept = newdept;
    }
    // setter and getter for salary
    void setSalary(double sal) {
        salary = sal;
    }
    double getSalary() const {
        return salary;
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class student {
public:
    string name;
    double* cgpaptr;
    // parametrized constructor
    student(string n, double c) {
        this->name = n;
        this->cgpaptr = new double;
        *cgpaptr = c;
    }
    // copy constructor
    student(student &s) {
        this->name = s.name;
        // this->cgpaptr = s.cgpaptr; // shallow copy
        cgpaptr = new double; // deep copy
        *cgpaptr = *(s.cgpaptr); // copy the value pointed to by s.cgpaptr
        cout << "Copy constructor for student called" << endl;
    }    
    // destructor
    ~student() {
        delete cgpaptr; // free the dynamically allocated memory
        cout << "Destructor called for student: " << name << endl;
    } 
    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }
};

int main() {
    // teacher t1("John Doe", "Computer Science", "Data Structures", 75000.0);
    // t1.getinfo();
    
    // teacher t2(t1); // Copy constructor
    // t2.changedept("Mathematics");
    // t2.setSalary(80000.0);
    // cout << "\nAfter changing department and salary of t2:" << endl;
    // t2.getinfo();

    student s1("Alice", 8.8);
    s1.getinfo();
    student s2(s1); 
    *s2.cgpaptr = 9.2; 
    s1.getinfo();
    s2.getinfo(); 

    return 0;
}