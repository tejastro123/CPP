//BINARY NUMBER SYSTEM

// #include<iostream>
// using namespace std;

// int decTObin(int decNum)
// {
//     int ans = 0,pow=1;
//     while(decNum>0)
//     {
//         int rem = decNum%2;
//         decNum /= 2;
//         ans += rem*pow;
//         pow *= 10;
//     }
//     return ans;
// }
// int binTOdec(int binNum)
// {
//     int ans = 0, pow = 1;
//     while(binNum>0)
//     {
//         int rem = binNum%10;
//         binNum /= 10;
//         ans += rem*pow;
//         pow *= 2;
//     }
//     return ans;
// }
// int main()
// {
//     int decNum;
//     cout<<"Enter a decimal number: ";
//     cin>>decNum;
//     cout<<"Binary equivalent: "<<decTObin(decNum)<<endl;
//     return 0;
//     int binNum;
//     cout<<"Enter a binary number: ";
//     cin>>binNum;
//     cout<<"Decimal equivalent: "<<binTOdec(binNum)<<endl;
//     return 0;

// }   
