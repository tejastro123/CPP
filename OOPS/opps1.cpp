// objects and classes
#include <iostream>
#include <string>
using namespace std;

class teacher {
private:
    double salary;
public:
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
};

int main() {
    teacher t1;
    t1.name = "John Doe";
    t1.dept = "Mathematics";
    t1.subject = "Algebra";
    t1.setSalary(50000.0);
    cout << "Teacher class created successfully." << endl;
    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: $" << t1.getSalary() << endl;
    t1.changedept("Physics");
    cout << "Department after change: " << t1.dept << endl;
    return 0;
}