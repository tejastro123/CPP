//bitwise operators

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=4,b=8;
//     cout<<(a&b)<<endl;//AND bin(a*b)
//     cout<<(a|b)<<endl;//OR bin(a+b)
//     cout<<(a^b)<<endl;//XOR
//     cout<<~a<<endl;//NOT -(a)
//     cout<<(a<<2)<<endl;//left shift a*2^b
//     cout<<(a>>2)<<endl;//right shift a/2^b

// }

//operator precedence

//+,-,! (unary operator)     1  R TO L //operator associativity
//*,/,%                      2  L TO R
//+,-                        3  L TO R 
//<,<=,>=,>                  4  L TO R
//==,!=                      5  L TO R
//&&                         6  L TO R
//||                         7  L TO R
//=,+=,-=,*=,/=,%=,<<=,>>=,&=8  R TO L

//scope

//global scope
//local scope- if-else,loops,functions,block of code

//Datatype Modifiers

//long,short,long long,signed,unsigned.
//int x; 4bytes=32bits , -2^31 to +2^31-1
//long int x; 8bytes=64bits , -2^63 to +2^63-1
//long long int x; 16bytes=128bits 
//short int x; 2bytes=16bits 
//float 4 bytes=32bits
//double 8 bytes=64bits
//above all are signed data types
//unsigned is used to store only +ve numbers , 0 to 2^32-1

// bool isPowerOfTwo(int n) {
//         long n1 = n;
//         long n2 = n1-1;
//         if (!n)
//             return false;
//         if (!(n1&n2))
//             return true;
//         return false;
//     }
// int main()
// {
//     cout<< sizeof(int) << endl;
//     cout<< sizeof(long int) << endl;
//     cout<< sizeof(long long int) << endl;
//     cout<< sizeof(short int) << endl;
//     cout<< sizeof(float) << endl; 
//     cout<< sizeof(double) << endl;
//     cout<< isPowerOfTwo(16) << endl;
//     cout<< isPowerOfTwo(17) << endl;
    
//     return 0;
// }


