//BOOK ALLOCATION PROBLEM(binary search)
/*You are given an array arr[] of integers, where each 
element arr[i] represents the number of pages in the ith 
book. You also have an integer k representing the number 
of students. The task is to allocate books to each student 
such that:
Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages 
assigned to any student. In other words, out of all 
possible allocations, find the arrangement where the 
student who receives the most pages still has the smallest 
possible maximum.*/
//write cpp code

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// bool isValid(vector<int>& books, int n, int m,int maxAllowPages){
//     int student=1,pages=0;
//     for(int i=0;i<n;i++){
//         if(books[i] > maxAllowPages) return false;
//         if(pages + books[i] <= maxAllowPages){
//             pages += books[i];
//         }
//         else{
//             student++;
//             pages = books[i];
//         }
//     }
//     return student > m ? false : true;

// }
// int allocatebooks(vector<int>& books, int n, int m){
//     if(m>n) return -1;
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += books[i];
//     }
//     int st = 0, end = sum, ans = -1;
//     while(st <= end){
//         int mid = st + (end - st) / 2;
//         if(isValid(books,n,m,mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             st = mid + 1;
//         }
//     }
//     return ans;
// }
// TC: O(nlogn)
// SC: O(1)

// int main()
// {
// n = no.of books , m = no.of students
//     vector<int> books = {15,17,20};
//     int n = 3 ,m = 2;
//     cout<<allocatebooks(books,n,m)<<endl;
// }
