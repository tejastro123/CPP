// abstraction 
//1. using access specifiers
// 2. using abstract classes
#include <iostream>
using namespace std;

class shape { // abstract class
public:
    virtual void draw() = 0; // pure virtual function
};

class circle : public shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};


// static methods
void fun(){
    static int x=0;
    cout << "Static function called with x = " << x << endl;
    x++;
};

class A{
public:
    int x;

    void incx() {
        x++;
    }
};

class ABC{
public:
    ABC() {
        cout << "Constructor of ABC called" << endl;
    }
    ~ABC() {
        cout << "Destructor of ABC called" << endl;
    }

};


int main(){
    // circle c;
    // c.draw(); // calls the draw function of circle class
    
    // fun(); // calling static function
    // fun(); // calling static function again, x will not change as it is local to the

    // A a;
    // A b;
    // a.x = 10;
    // b.x = 20;
    // a.incx();
    // cout << "a.x: " << a.x << ", b.x: " << b.x << endl; // a.x will be 11, b.x will remain 20
    // b.incx();
    // cout << "a.x: " << a.x << ", b.x: " << b.x << endl; // a.x will be 11, b.x will be 21
    
    if(true) {
        static ABC obj; // constructor will be called
    } 
    cout << "End of main function" << endl; // destructor will be called here
    return 0;

}

