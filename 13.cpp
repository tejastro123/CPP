/*Implement pow(x, n), which calculates x raised 
to the power n (i.e., xn).*/

// #include<iostream>
// #include<vector>
// using namespace std;

//binary exponentiation
// double pow(double x, int n){
//     if(n==0) return 1.0;
//     if(x==0) return 0.0;
//     if(x==1) return 1.0;
//     if(n==-1) return 1/x;
//     if(x==-1 && n%2==0) return 1;
//     if(x==-1 && n%2!=0) return -1.0;

//     long binform = n;
//     if(n<0){
//         binform = -binform;
//         x = 1/x;
//     }

//     double result = 1;

//     while(binform > 0){
//         if( binform % 2 == 1){
//             result *= x;
//         }
//         x *= x;
//         binform /= 2;
//     }        
//     return result;
// }

//exponentiation by squaring
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

// STOCK BUY & SELL
/*You are given an array prices where prices[i] is
the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day
to buy one stock and choosing a different day in the 
future to sell that stock.
Return the maximum profit you can achieve from this 
transaction. If you cannot achieve any profit, return 0.
write cpp code*/

// int maxProfit(vector<int>& prices){
//     int n = prices.size();
//     int minPrice = INT_MAX, maxProfit = 0;
//     for (int i = 0; i < n; i++){
//         minPrice = min(minPrice, prices[i]); 
//         maxProfit = max(maxProfit, prices[i] - minPrice);
//     }
//     return maxProfit;
// }

// int main()
// {
    // double x = 2.0;
    // int n = 10;
    // cout << "Result: " << pow(x, n) << endl;

//     vector<int> prices = {7,1,5,3,6,4};
//     cout << "Max Profit: " << maxProfit(prices) << endl;
//     return 0;
// }