//FUNCTIONS//

// #include<iostream>
// using namespace std;

// int hello(){
//     cout<<"Hello"<<endl;
//     return 5;
//   }
// int sum(int a, int b){
//     return a+b;
//   }
// int min(int a,int b){
//     if(a<b)
//     return a;
//     else
//     return b;
// }
// int sum(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=n;i>0;i--){
//         fact*=i;
//     }
//     return fact;
// }

// int main()
// {
//     int result = hello();
//     cout<<"Result: "<<result<<endl;
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     cout<<"Sum: "<<sum(a,b)<<endl;
//     cout<<"Minimum: "<<min(a,b)<<endl;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Sum of numbers from 0 to "<<n<<" is: "<<sum(n)<<endl;
//     cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;

// }

//problems

// #include<iostream>
// using namespace std;

// int SumOfDigits(int n)
// {
//     int sum = 0;
//     while(n!=0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//         return sum;
// }
// int factorial(int n)
// {
//     int fact = 1;
//     for(int i=1; i<=n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int nCr(int n, int r)
// {
//    int fact_n = factorial(n);
//    int fact_r = factorial(r);
//    int fact_n_r = factorial(n - r); 
//    return fact_n / (fact_r * fact_n_r);
// }

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
     //cout<<"Sum of digits: "<<SumOfDigits(n)<<endl;
     //cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     cout<<"nCr("<<n<<","<<r<<"): "<<nCr(n, r)<<endl;    
// }
