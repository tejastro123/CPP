//ARRAY Data structure

// #include<iostream>
// using namespace std;

//1
// int main() 
// {
//     int size = 5;
//     int marks[size];

//     for(int i=0;i<size;i++){
//         cin >> marks[i];
//     }
//     for(int i=0;i<size;i++){
//         cout << marks[i] << " ";
//     }

//     int marks[] = {90, 85, 95, 80, 92};
//     int size = 5;
//     int smallest=INT_MAX;
//     int largest=INT_MIN;
//     smallest number
//     for(int i=0;i<size;i++){
//         if(marks[i]<smallest){
//             smallest = marks[i];
//         }
//     }
//     largest number
//     for(int i=0;i<size;i++){
//         if(marks[i]>largest){
//             largest = marks[i];
//         }
//     }
//     smallest position
//     int smallest_position = 0;
//     for(int i=1;i<size;i++){
//         if(marks[i]<marks[smallest_position]){
//             smallest_position = i;
//             }
//     }
//     largest position
//     int largest_position = 0;
//     for(int i=1;i<size;i++){
//         if(marks[i]>marks[largest_position]){
//             largest_position = i;
//             }
//     }
//     cout << "Smallest number is: "<<smallest<<endl;
//     cout << "Largest number is: "<<largest<<endl;
//     cout << "Position of smallest number is: "<<smallest_position<<endl;
//     cout << "Position of largest number is: "<<largest_position<<endl;

// }

//2
// int changearr(int arr[],int size){
//     for(int i=0;i<size;i++){
//         arr[i] = arr[i]*2;
//     }
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7};
//     cout<<"in main\n";
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
//     changearr(arr,3);
//     cout<<"\nAfter changing array\n";
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//3
// int linearSearch(int arr[],int sz,int target){
//     time complexity = o(n).
//     for(int i=0;i<sz;i++){
//         if(arr[i]==target){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }
// void reverseArr(int arr[],int sz){
//     1
//     int temp;
//     for(int i=0;i<sz/2;i++){
//         temp = arr[i];
//         arr[i] = arr[sz-i-1];
//         arr[sz-i-1] = temp;
//     }
//     2
//     int start=0,end=sz-1;
//     while(start<end){
//         int temp = arr[start];  
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[]={4,2,7,8,1,3,5};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int target;
//     cout<<"Enter target number: ";
//     cin>>target;
//     int result = linearSearch(arr,sz,target);
//     if(result==-1){
//         cout<<"Target number not found in array"<<endl;
//     }
//     else{
//         cout<<"Target number found at index: "<<result<<endl;
//     }
//     reverseArr(arr,sz);
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//4 homework problems
// #include<iostream>
// using namespace std;

//print array
// void printarray(int arr[],int sz){
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
//sumofarray
// int sumofarray(int arr[],int sz){
//     int sum = 0;
//     for(int i=0;i<sz;i++){
//         sum += arr[i];
//     }
//     return sum;
// }
//swap max & min of array
// void swapmaxmin(int arr[],int sz){
//     int max = arr[0];
//     int min = arr[0];
//     int max_index = 0;
//     int min_index = 0;
//     for(int i=1;i<sz;i++){
//         if(arr[i]>max){
//             max = arr[i];
//             max_index = i;
//         }
//         if(arr[i]<min){
//             min = arr[i];
//             min_index = i;
//         }
//     }
//     int temp;
//     temp = arr[max_index];
//     arr[max_index] = arr[min_index];
//     arr[min_index] = temp;
//     cout<<"After swapping max & min of array: ";
//     printarray(arr,sz);
// }
//print unique values in array
// void printunique(int arr[],int sz){
//     int unique[sz];
//     int count = 0;
//     for(int i=0;i<sz;i++){
//         int flag = 0;
//         for(int j=0;j<count;j++){
//             if(arr[i]==unique[j]){  
//                 flag = 1;
//                 break;
//             }
//         }
//             if(flag==0){
//                 unique[count] = arr[i];
//                 count++;
//             }
//     }
//     cout<<"Unique values in array: ";
//     printarray(unique,count);
// }
//intersection of two arrays
// void intersection(int arr1[],int sz1,int arr2[],int sz2){
//     int intersection[sz1];
//     int count = 0;
//     for(int i=0;i<sz1;i++){
//         for(int j=0;j<sz2;j++){
//             if(arr1[i]==arr2[j]){
//                 intersection[count] = arr1[i];
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout<<"Intersection of two arrays: ";
//     printarray(intersection,count);
// }
// int main()
// {
//     int arr1[]={4,2,7,8,1,3,3,4,2,8,4,5};
//     int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//     int sum = sumofarray(arr,sz);
//     cout<<"Sum of array is: "<<sum<<endl;
//     swapmaxmin(arr,sz);
//     printunique(arr,sz);
//     int arr2[]={4,9,2,7,5,6,8,4,1,2};
//     int sz2 = sizeof(arr2)/sizeof(arr2[0]);
//     intersection(arr1,sz1,arr2,sz2);
//     return 0;    
// }
