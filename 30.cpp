// permutation in strings 

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// void permute(string str, int l, int r){
//     if(l == r)
//     cout << str << endl;
//     else {
//         for(int i = l; i <= r; i++) {
//             swap(str[l], str[i]);
//             permute(str, l+1, r);
//             swap(str[l], str[i]); // backtrack
//         }
//     }
//     return;
// }

//find that s1 is permutation of substring of s2 
// bool isFreqSame(int freq1[], int freq2[]) {
//     for(int i = 0; i < 26; i++) {
//         if(freq1[i] != freq2[i])
//             return false;
//     }
//     return true;
// }
// bool checkInclusion( string s1, string s2 ) {
//     int freq[26]={0};
//     int n = s1.length();
//     int m = s2.length();    
    
//     // Count frequency of characters in s1
//     for(int i = 0; i < n; i++) {
//         freq[s1[i] - 'a']++;
//     }
    
//     int windSize = s1.length();

//     // Check if s2 has all characters of s1
//     for(int i = 0; i < m; i++) {
//         int windIdx=0, idx=i;
//         int windFreq[26]={0};

//         while(windIdx < windSize && idx < m) {
//             windFreq[s2[idx] - 'a']++;
//             windIdx++, idx++;
//         }
        
//         // If all characters of s1 are present in the current window of s2
//         if(isFreqSame(freq,windFreq)){
//             return true;
//         } 
//     }
//     return false;
// }

// int main(){
//     string str = "abc";
//     int n = str.length();
//     permute(str, 0, n-1);
//     string s1 = "abc";
//     string s2 = "ahbgdabc";
//     cout << boolalpha << checkInclusion(s1, s2) << endl;
//     return 0;
// }

//exlpain the above code?