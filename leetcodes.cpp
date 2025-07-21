/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself
Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
code in cpp*/

// #include<iostream>
// using namespace std;
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// class Solution {
//     public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* dummy = new ListNode(0);
//         ListNode* current = dummy;
//         int carry = 0;
//         while (l1 || l2 || carry) { 
//             int x = (l1 ? l1->val : 0);
//             int y = (l2 ? l2->val : 0);
//             int sum = carry + x + y;
//             carry = sum / 10;
//             current->next = new ListNode(sum % 10);
//             current = current->next;
//             if (l1) l1 = l1->next;
//             if (l2) l2 = l2->next;
//             }
//             return dummy->next;
//     }
// };
// int main()
// {
    // Test the function
//     ListNode* l1 = new ListNode(2);
//     l1->next = new ListNode(4);
//     l1->next->next = new ListNode(3);
//     ListNode* l2 = new ListNode(5);
//     l2->next = new ListNode(6);
//     l2->next->next = new ListNode(4);
//     Solution solution;
//     ListNode* result = solution.addTwoNumbers(l1, l2);
    // Print the result
//     while (result) {
//         cout << result->val << " ";
//         result = result->next;
//     }
//     return 0;
// }

/*Given an integer x, return true if x is a palindrome
, and false otherwise.*/
//write cpp code
// bool isPalindrome(int x) {
//     if(x < 0 || (x % 10 == 0 && x!=0)) return false;
//     int rev = 0;
//     while(x > rev){
//         rev = rev*10 + x%10;
//         x /= 10;
//     }
//     return (x == rev || x == rev/10);
// }
// int main()
// {
//     int x = 124521;
//     cout << boolalpha << isPalindrome(x) << endl;
//     return 0;
// }

/*Given a roman numeral, convert it to an integer.*/
//write cpp code
// int romanToInt(string s) {
//     int result = 0;
//     int prev = 0;
//     for (int i = s.size() - 1; i >= 0; i--) {
//         int curr = 0;
//         switch (s[i]) {
//             case 'I': curr = 1; break;
//             case 'V': curr = 5; break;
//             case 'X': curr = 10; break;
//             case 'L': curr = 50; break;
//             case 'C': curr = 100; break;
//             case 'D': curr = 500; break;
//             case 'M': curr = 1000; break;
//         }
//         if (curr >= prev) {
//             result += curr;
//         } else {
//             result -= curr;
//         }
//         prev = curr;
//     }
//     return result;
// }
// int main()
// {
//     string s = "MCMXCIV";
//     cout << romanToInt(s) << endl;
//     return 0;
// }


// reverse words in a string
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// string reverseString(string str)
// {
//     reverse(str.begin(), str.end());  // Reverse str using inbuilt function
//     str.insert(str.end(), ' ');// Add space at the end so that the last word is also reversed
    
//     int n = str.length();
//     int j = 0;
//     // Find spaces and reverse all words
//     // before that
//     for (int i = 0; i < n; i++) {
//         if (str[i] == ' ') { // If a space is encountered
//             reverse(str.begin() + j, str.begin() + i);
//             j = i + 1;// Update the starting index for next word to reverse
//         }
//     }
//     str.pop_back();// Remove spaces from the end of the word that we appended
//     return str;// Return the reversed string
// }

// Function to remove multiple spaces from a string and leave one space between words in a string  // Using STL library's remove and erase functions
// string removeExtraSpaces(string str){
//     str.erase(remove(str.begin(), str.end(), ' '), str.end());
//     return str;
// }

// int main()
// {
//     string str = "tejas is good boy";
//     cout << reverseString(str) << endl;
//     cout << removeExtraSpaces(str) << endl;
// }


// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise
// #include<iostream>
// #include<string>
// using namespace std;

// bool isPalindrome(string s) {
//     int left = 0;
//     int right = s.length() - 1;
//     while (left < right) {
//         // Ignore non-alphanumeric characters from left
//         while (left < right && !isalnum(s[left])) {
//             left++;
//         }
//         // Ignore non-alphanumeric characters from right
//         while (left < right && !isalnum(s[right])) {
//             right--;
//         }
//         // Compare characters at left and right
//         if (tolower(s[left]) != tolower(s[right])) {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.*/
//c++code
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;

// int removeElement(int nums[], int numsSize, int val) {
//     int k = 0;
//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] != val) {
//             nums[k++] = nums[i];
//         }
//     }
//     return k;
// }
//  int main()
//  {
//     int nums[] = {3,2,2,3};
//     int val = 3;
//     int numsSize = sizeof(nums)/sizeof(nums[0]);
//     int k = removeElement(nums, numsSize, val);
//     cout << k << endl;
//     return 0;
//  }


/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.*/
//c++ code
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;
// int removeDuplicates(vector<int> &nums){
//     sort(nums.begin(), nums.end());
//     if(nums.empty()) return 0;
//     int k = 1;
//     int n = nums.size();
//     for(int i = 1; i < n ; i++){
//         if(nums[i]!= nums[i-1]){
//             nums[k++] = nums[i];
//         }
//     }
//     return k;
// }
// int main()
// {
//     vector<int> nums = {1,1,2,3,2,};
//     int k = removeDuplicates(nums);
//     cout << "Number of unique elements: " << k << endl;
//     for(int i = 0; i < k; i++){
//         cout << nums[i] << " ";
//     }
//     return 0;
// }


