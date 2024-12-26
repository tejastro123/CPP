/*no.of sub arrays = n(n+1)/2 & continuous part*/
//time complexity = o(n^3)
// #include<iostream>
// using namespace std;
// int main()
// {
//    int sz=5;
//    int arr[sz]={1,2,3,4,5};
//    int count=0;
//    for(int st=0;st<sz;st++){
//       for(int end=st;end<sz;end++){
//          for(int i=st;i<=end;i++){
//             cout<<arr[i];
//          }
//          count++;
//          cout<<" ";
//       }
//       cout<<endl;
//    }
//    cout<<"no.of subarrays: "<<count<<endl;
//    return 0;
// }

/*maximum subarray sum*/ //brute force approach
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n=5;
//    int arr[]={1,2,3,4,5};

//    int max_sum=0;
//    for(int st=0; st<n; st++){
//       int curr_sum=0;
//       for(int end=st; end<n; end++){
//          curr_sum+=arr[end];
//          max_sum = max(curr_sum,max_sum);
//       }
//    }
//    cout<<"max subarray sum: "<<max_sum<<endl;

// }

//kadane's algorithm
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int arr[]={-1,2,3,-4,-5};
//     int max_sum=INT_MIN;
//     int curr_sum=0;
//     for(int i=0; i<n; i++){
//       curr_sum+=arr[i];
//       max_sum = max(curr_sum,max_sum);
//       if(curr_sum<0){
//          curr_sum=0;
//          }
//    }
//    cout<<"max subarray sum: "<<max_sum<<endl;
//    return 0;
// }