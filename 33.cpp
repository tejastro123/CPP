// MATHS FOR DSA (EUCLIDS ALGORITHM, SIEVE OF ERATOSTHENES, MODULAR ARITHMETICS)

// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<algorithm>
// #include<string>
// using namespace std;

//1.prime logic & sieve of eratosthenes
// string isPrime(int n){
//     for(int i=0; i<sqrt(n); i++){
//         if(n%i==0){
//             return "Not Prime";
//         }
//     }
//     return "Prime";
// }

// vector<int> sieveOfEratosthenes(int n){
//     vector<bool> isPrime(n+1, true);
//     int count = 0;
//     vector<int> primes;

//     for(int p=2; p<n; p++){
//         if(isPrime[p]){
//             count++;
//             for(int i=p*p; i<n; i+=p){
//                 isPrime[i] = false;
//             }
//         }
//     }
//     for(int p=2; p<n; p++){
//         if(isPrime[p]){
//             primes.push_back(p);
//         }
//     }
//     return primes;
// }

//2.GCD eith euclid's algorithm &LCM

//euclidean gcd
// int gcd(int a, int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a = a%b;
//         }
//         else{
//             b = b%a;
//         }
//     }
//     if(a==0) return b;
//     else return a;
// }
//using recursion
// int gcd(int a, int b){
//     if(b==0) return a;
//     return gcd(b, a%b);
// }

//simple gcd
// int gcd(int a, int b){
//     int gcd = 1;
//     for(int i=1; i<=min(a,b); i++){
//         if(a%i==0 && b%i==0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }

//lcm of a and b
// int lcm(int a, int b){   // a * b = gcd(a,b) * lcm(a,b) 
//     return (a*b)/gcd(a, b);
// }

//3.digits in a number
// void printdigits(int n){
//     int count = 0; 
//     while(n!=0){
//         count++;
//         cout << n%10 << " ";
//         n = n/10;
//     }
//     cout << count;
//     cout << endl;
// }

//4.reverse a number
// int reverse(int n){
//     int rev = 0;
//     while(n!=0){
//         int digit = n%10;
//         if(rev > INT_MAX/10 || rev < INT_MIN/10){
//            return 0;
//          }
//         rev = rev*10 + digit;
//         n = n/10;
//     }
//     return rev; 
// }

//5.check palindrome of number
// bool isPalindrome(int n){
//     int copyN = n;
//     int rev = 0;
//     while(n!=0){
//         int digit = n%10;
//         if(rev > INT_MAX/10 || rev < INT_MIN/10){
//             return 0;
//         }
//         rev = rev*10 + digit;
//         n = n/10;
//     }
//     return rev == copyN;
// }

//6.armstrong logic
// bool isArmstrong(int n){
//     int copyN = n;
//     int sumofcubes= 0;
//     while(n!=0){
//         int digit = n%10;
//         sumofcubes += pow(digit, 3);
//         n = n/10;
//     }
//     return sumofcubes == copyN;
// }

//7.moular arithmetics
/*properties:-
(x+y)%m = x%m + y%m
(x-y)%m = x%m - y%m
(x*y)%m = x%m * y%m
((x%m)%m)%m = 1
*/
//8.power exponentiation
// int pow(int x, int n) {
//     if (n == 0){
//     return 1;
//     }
//     int temp = pow(x, n / 2);
//     if (n % 2 == 0){
//     return temp * temp;
//     }
//     else {
//     return x * temp * temp;
//     }
// }


// int main()
// {
    // int n = 20;
    // vector<int> primes = sieveOfEratosthenes(n);
    // int sz = primes.size();
    // for(int i=0; i<sz; i++){
    //     cout << primes[i] << " ";
    // }
    // int n = 12345;
    // printdigits(n);

    // int n = 153;
    // if(isArmstrong(n)){
    //     cout << "Armstrong number" << endl;
    // }
    // else{
    //     cout << "Not an Armstrong number" << endl;
    // }

    // int a = 10, b = 20;
    // cout << "GCD: " << gcd(a, b) << endl;
    // cout << "LCM: " << lcm(a, b) << endl;

    // int n = 12345;
    // cout << "Reversed number: " << reverse(n) << endl;

    // int n = 12321;
    // if(isPalindrome(n)){
    //     cout<< "n is palindrome";
    // }
    // else{
    //     cout<< "n is not a palindrome";
    // }

// }



   

