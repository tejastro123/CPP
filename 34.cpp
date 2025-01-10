// 2D arrays in c++


// #include<iostream>
// #include<vector>
// using namespace std;

// bool linearSearch(int matrix[][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(matrix[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// maximum sum of row
// int getmaxrowsum(int matrix[][3], int cols, int rows){
//     int maxrowSum = INT_MIN;
//     for(int i=0;i<rows;i++){
//         int rowsum = 0;
//         for(int j=0;j<cols;j++){
//             rowsum += matrix[i][j];
//         }
//         if(rowsum > maxrowSum){
//             maxrowSum = rowsum;
//         }
//     }
//     return maxrowSum;
// }

// maximum column sum
// int getmaxcolsum(int matrix[][3], int rows, int cols){
//     int maxcolSum = INT_MIN;
//     for(int j=0;j<cols;j++){
//         int colsum = 0;
//         for(int i=0;i<rows;i++){
//             colsum += matrix[i][j];
//         }
//         if(colsum > maxcolSum){
//             maxcolSum = colsum;
//         }
//     }
//     return maxcolSum;
// }

// sum of diagonal elements
// int getdiagonalsum(int matrix[][3], int n){ // O(n*n)
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == j){
//                 sum += matrix[i][j];
//             }
//             else if(j == n-i-1){
//                 sum += matrix[i][j];
//             }
//         }
//     }
//     return sum;
// }
// int getdiagonalsum(int matrix[][3], int n){ // O(n)
//     int sum = 0;   
//     for(int i=0; i<n; i++){
//         sum += matrix[i][i];
//         if(i != n-i-1){
//             sum += matrix[i][n-i-1];
//         }
//     }
//     return sum;
// }

// int main()
// {
    // int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
    // int rows = 3, cols = 3;
    // int n = 3;
    // initializing array elements
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>> matrix[i][j];
    //     }
    // }
    // printing array elements
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int key;
    // cout << "Enter the key to search: ";
    // cin >> key;
    // if(linearSearch(matrix,rows,cols,key)){
    //     cout << "Key found in the array" << endl;
    // } else {
    //     cout << "Key not found in the array" << endl;
    // }

    // int maxSum = getmaxrowsum(matrix, cols, rows);
    // cout << "Maximum sum of rows: " << maxSum << endl;
    // int maxSum = getmaxcolsum(matrix, rows, cols);
    // cout << "Maximum sum of columns: " << maxSum << endl;

    // cout << "Sum of diagonal elements: " << getdiagonalsum(matrix, n) << endl;
// }

// 2D vectors

// int main()
// {
//     vector<vector<int>> matrix = {{1,2,3}, {4,5,6,10,11}, {7,8,9}};
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }