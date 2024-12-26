//vectors
//functions :- size,push_back,pop_back,front,back,at
/*when new element is pushed back into vectors,
then vector size gets doubled which is called capacitty.
size is no.of elements stored*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {1,2,3,4,5,6,7,8};
//     v1.push_back(9);
//     v1.pop_back();
//     cout << "size = "<<v1.size() << endl;
//     cout << "front = "<<v1.front() << endl;
//     cout << "back = "<<v1.back() << endl;
//     cout << "at(2) = "<<v1.at(2) << endl;
//     for(int i : v1){ 
//         cout << i <<" ";
//     }

// }

//static vs dynamic allocation
//static allocation :- memory is allocated at compile time
//dynamic allocation :- memory is allocated at runtime
//new and delete are used for dynamic allocation

//problems
// #include<iostream>
// #include<vector>
// using namespace std;

/*1 Every element in array is twice except one element, 
find that element write function*/ 
// xor of same number is zero
// int findSingleElement(vector<int> arr)
// {
//     int n = arr.size();
//     int xorResult = 0;
//     for(int i=0; i<n; i++)
//     {
//         xorResult = xorResult ^ arr[i];
//     }
//     return xorResult;
// }

/*2 linear search in vectors*/
// int search(vector<int> arr, int target){
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

//3 reverse a vector
// void reverse(vector<int> &arr){
//     int start = 0, end = arr.size()-1;
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     vector<int> arr = {2, 2, 5, 3, 3};
//     cout << findSingleElement(arr) << endl;
//     vector<int> arr = {1, 2, 3, 4, 5};
//     cout << search(arr, 3) << endl;
//     vector<int> arr = {1, 2, 3, 4, 5};
//     reverse(arr);
//     for(int i : arr){
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }