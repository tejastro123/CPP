 //PALINDROME PARTITIONING 
 //Given a string, partition it such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of the given string.

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool isPalin(string s){
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}
void getallparts(string s, vector<string> &partitions, vector<vector<string>> &ans){
    int n = s.size();
    if(n == 0){
        ans.push_back(partitions);
        return;
    }

    for(int i=0; i<n; i++){
        string part = s.substr(0,i+1);
        if(isPalin(part)){
            partitions.push_back(part);
            getallparts(s.substr(i+1), partitions, ans);
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s){
    vector<vector<string>> ans;
    vector<string> partitions;

    getallparts(s, partitions, ans);
    return ans;
}

int main(){

    string s;
    cout << "Enter a string: ";
    cin >> s;
    vector<vector<string>> partitions = partition(s);
    int m = partitions.size();
    cout << "Total number of palindrome partitions: " << m << endl;
    for(int i=0; i<m;i++){
        cout << "Partition " << i+1 << ": ";
        for(int j=0; j<m;j++)
            cout << partitions[i][j] << " ";
        cout << endl;
    }
    return 0;
}