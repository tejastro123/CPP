
#include <iostream>
#include <string>
using namespace std;    

// 2. multilevel inheritance
// class person {
// public:
//     string name;
//     int age;

// };

// class student : public person {
// public:
//     int rollno;
// };

// class gradstudent : public student  {
// public:
//     string thesisTopic;
// };


// 3. multiple inheritance
// class student{
// public:
//     string name;
//     int rollno;
// };

// class teacher {
// public:
//     string subject;
//     string salary;
// };

// class TA : public student, public teacher {
// public:
//     string rearcharea;
// };



// 4. hierarchical inheritance
class person {
public:
    string name;
    int age;
};

class student : public person {
public:
    int rollno;
};

class teacher : public person {
public:
    string subject;
    string salary;
};

class TA : public student, public teacher {
public:
    string rearcharea;
};  


// 5. hybrid inheritance


int main() {
    // gradstudent gs;
    // gs.name = "Alice";
    // gs.age = 25;
    // gs.rollno = 12345;
    // gs.thesisTopic = "Machine Learning";

    // cout << "Name: " << gs.name << endl;
    // cout << "Age: " << gs.age << endl;
    // cout << "Roll No: " << gs.rollno << endl;
    // cout << "Thesis Topic: " << gs.thesisTopic << endl;


    // TA ta;
    // ta.name = "Bob";
    // ta.rollno = 67890;
    // ta.subject = "Computer Science";
    // ta.salary = "$5000";
    // ta.rearcharea = "Artificial Intelligence";

    // cout << "TA Name: " << ta.name << endl;
    // cout << "Roll No: " << ta.rollno << endl;
    // cout << "Subject: " << ta.subject << endl;
    // cout << "Salary: " << ta.salary << endl;
    // cout << "Research Area: " << ta.rearcharea << endl;

    // TA ta;
    // ta.student::name = "Charlie";
    // ta.student::age = 30;
    // ta.rollno = 12345;
    // ta.subject = "Physics";
    // ta.salary = "$6000";
    // ta.rearcharea = "Quantum Mechanics";
    
    // cout << "TA Name: " << ta.student::name << endl;
    // cout << "Age: " << ta.student::age << endl;
    // cout << "Roll No: " << ta.rollno << endl;
    // cout << "Subject: " << ta.subject << endl;
    // cout << "Salary: " << ta.salary << endl;
    // cout << "Research Area: " << ta.rearcharea << endl;
    
    return 0;
}


