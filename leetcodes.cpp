/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself
Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
code in cpp*/
#include<iostream>
using namespace std;
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

/**/