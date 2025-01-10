// search in 2D arrays

// #include <iostream>
// #include <vector>
// using namespace std;
// MATRIX 1
/*You are given an m x n integer matrix matrix with the following two 
properties: Each row is sorted in non-decreasing order.
            The first integer of each row is greater than the last 
            integer of the previous row.
Given an integer target, return true if target is in matrix or false 
otherwise. You must write a solution in O(log(m * n)) time complexity.
 */
//write c++ code

//funcction(2)
// bool searchMatrix(vector<vector<int>>& matrix, int target) { // O(log(m * n))
//     int m = matrix.size(); 
//     int n = matrix[0].size();
//     int left = 0, right = m * n - 1;
//     while(left <= right) {
//         int mid = left + (right - left) / 2;
//         int midVal = matrix[mid / n][mid % n];
//         if(midVal == target) return true;
//         if(midVal < target) left = mid + 1;
//         else right = mid - 1;
//     }
//     return false;
// };

// write two functions(1)
// bool searchInRow(vector<vector<int>>& matrix, int target, int row) { // O(log(n))
//     int n = matrix[0].size();
//     int st =0, end = n-1;
//     while(st <= end) {
//         int mid = st + (end - st) / 2;
//         if(target == matrix[row][mid]) return true;
//         else if(target < matrix[row][mid]) end = mid - 1;
//         else st = mid + 1;
//     }
//     return false;
// }
// bool searchMatrix(vector<vector<int>>& matrix, int target) { // O(log(m))
//     int m = matrix.size();
//     int n = matrix[0].size();
//     int str=0,endr=m-1;

//     while(str<=endr) {
//         int midr=(str+endr)/2;
//         if(target>= matrix[midr][0] && target<= matrix[midr][n-1]){
//             return searchInRow(matrix, target,midr);
//         }
//         else if(target >= matrix[midr][n-1]){
//             str=midr+1;
//         }
//         else{
//             endr=midr-1;
//         }
//     }
//     return false;
// }


// MATRIX 2
/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.*/

//function
// bool searchMatrix(vector<vector<int>>& matrix, int target){
//     int n = matrix.size();
//     int r=0, c= n-1;
//     while(r<n && c>=0){
//         if(target == matrix[r][c]) return true;
//         else if(target < matrix[r][c] ) c--;
//         else r++;
//     }
//     return false;
// }
// int main() {
    // vector<vector<int>> matrix = {{1, 3, 5, 7},
    // {10, 11, 16, 20},
    // {23, 30, 34, 50}};
    // cout << searchMatrix(matrix, 3) << endl; // true
    // cout << searchMatrix(matrix, 15) << endl; // false

    // vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    // cout << searchMatrix(matrix, 3) << endl; // true
    // cout << searchMatrix(matrix, 15) << endl; // false

// }