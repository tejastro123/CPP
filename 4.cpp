//PRINT PATTERNS//
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n ;
//     cout<< "enter no.of times - n "<< endl;
//     cin>>n;
    //1
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //2
    // for(int i=0;i<n;i++){
    //     char ch = 'A';
    //     for(int j=0;j<n;j++){
    //         cout<< ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    //3
    // int num ;
    // cout<<"enter number - num"<<endl;
    // cin>>num;
    // cout<<"The Pattern Is- "<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }
    //4
    // cout<<"The Pattern Is- "<<endl;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    //5
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"*";
    //         }
    //         cout<<endl;
    // }
    //6
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //         }
    //         for(int j=0;j<=i;j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    // }
    // 7
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<(i+1);
    //         }
    //         cout<<endl;
    // }
    //8
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //         }
    //         for(int j=0;j<=i;j++){
    //             cout<<(i+1);
    //         }
    //         cout<<endl;
    // }
    // 9
    // char ch ='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<< ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }
    // 10
    // for(int i=0;i<=n;i++){
    //     for(int j=1;j<i+1;j++){
    //         cout<<j<<" ";
    //         }
    //         cout<<endl;
    // }
    //11
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<j<<" ";
    //         }
    //         cout<<endl;
    // }
    //12
    // int num =1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //         }
    //         cout<<endl;
    // }
    //13
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    //14//pending ??//
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    //15
    // for(int i=0;i<n;i++){
           //spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
           //numbers
    //     for(int j=0;j<n-i;j++){
    //             cout<<i+1;
    //             }
    //             cout<<endl;
    // }
    //16
    // for(int i=0;i<n;i++){
        //spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //         }
        //num1
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //         }
        //num2
    //     for(int j=i;j>0;j--){
    //         cout<<j;
    //         }
    //         cout<<endl;
    // }
    //17
    //top
    // for(int i=0;i<n;i++){
        //spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
        //spaces
    //         for(int j=0;j<2*i-1;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //bottom
    // for(int i=0;i<n-1;i++){
        //spaces
    //     for(int j=0;j<i+1;j++){
    //     cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=n-2){
        //spaces
    //         for(int j=0;j<2*(n-2-i)-1;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //18
    // int spaces = 2 * n - 1;
    // int stars = 0;

    // The outer loop will run for (2 * N - 1) times
    // for (int i = 1; i <= 2*n-1; i++) {
    // Upper half of the butterfly
    //     if (i <= n) {
    //         spaces = spaces - 2;
    //         stars++;
    //     }
    // Lower half of the butterfly
    //     else {
    //         spaces = spaces + 2;
    //         stars--;
    //     }
    // Print stars
    //     for (int j = 1; j <= stars; j++) {
    //         cout << "*";
    //     }
    // Print spaces
    //     for (int j = 1; j <= spaces; j++) {
    //         cout << " ";
    //     }
    // Print stars
    //     for (int j = 1; j <= stars; j++) {
    //         if (j!=n) {
    //             cout << "*";
    //         }
    //     }
    //     cout << "\n";
    // }
//}