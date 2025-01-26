//  RECURSION TUTORIAL in c++
/* recursion ,callstack , recurrence relation , recursion tree , tc&sc in recursion */
#include<iostream>
using namespace std;

// print n numbers
void printNumbers(int n) {
    if(n <= 0) {
        return;
    }
    cout << n << " ";
    printNumbers(n - 1);
}// recurrence relation : Tc(n) = O(1) + Tc(n-1) 

// factorial of a number
int factorial(int n) { 
    if(n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}// TC = total no.of rec calls * work in each call
 // SC = depth of rec tree * memory in each call
 // TC = O(n * k) = O(n) , SC = O(n)

// sum of n numbers
 int sum(int n) { // f(n) = n + f(n-1) 
    if(n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}


int main(){
    int n = 10;
    cout << "Printing numbers from 1 to " << n << ":";
    printNumbers(n);
    cout << "\nFactorial of 5: " << factorial(5) << endl;
    cout << "Sum of numbers from 1 to " << n << ": " << sum(n) << endl;
    return 0;
}