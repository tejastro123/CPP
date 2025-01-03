//VALID PALINDROME

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// bool isAlphanum(char ch){
//     if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
//         return true;
//     }
//     return false;
// }
// bool isPalindrome(string s){
//     int i = 0, j = s.length() - 1;
//     while(i < j){
//         if(!isAlphanum(s[i])){
//             i++; continue;
//         }
//         if(!isAlphanum(s[j])){
//             j--; continue;
//         }
//         if(s[i] != s[j]){
//             return false;
//         }
//         i++; j--;
//     }
//     return true;
// }

//remove all occurrences of a character from a string
// string removeChar(string s, char ch){
//     string res = "";
//     for(int i = 0; i < s.length(); i++){
//         if(s[i] != ch){
//             res += s[i];
//         }
//     }
//     return res;
// }

//remove all non-alphanumeric characters from a string
// string cleanString(string s){
//     string res = "";
//     for(int i = 0; i < s.length(); i++){
//         if(isalnum(s[i])){ //isalmun()
//             res += tolower(s[i]);
//         }
//     }
//     return res;
// }

// remove all occurrences of a part of string
// string removePart(string s, string part){
//     while(s.length() > 0 && s.find(part)<s.length()){
//         s.erase(s.find(part), part.length());
//     }
//     return s;
// }

// int main() 
// {
    // string s;
    // cout<<"Enter a string: ";
    // cin >> s;
    // if(isPalindrome(s))
    // cout << "YES" << endl;
    // else
    // cout << "NO" << endl;
    
    // string ch;
    // cout<<"Enter a character: ";
    // cin >> ch;
    // string cleanedStr = cleanString(s);
    // cout << "Cleaned string: " << cleanedStr << endl;
    
    // string s = "abcdefghijklmnopqrstuvwxyzABCDEF";
    // cout<<"Enter a part to remove: ";
    // string part;
    // cin >> part;
    // string modifiedStr = removePart(s, part);
    // cout << "Modified string: " << modifiedStr << endl;
    
// }