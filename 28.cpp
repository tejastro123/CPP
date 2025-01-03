//STRINGS IN C++

#include<iostream>
#include<string>
using namespace std;

int main()
{
    // char str[] = "tejas.m";
    // cout<< str<<endl;

    // char str1[10];
    // char str2[10];
    // cout<<"enter character";
    // cin>>str1;
    // cout<<str1<<endl;
    // cout<<"enter string";
    // cin>>str2;
    // cout<<str2<<endl;

    // char str[15];
    // cout<<"enter string"<<endl;
    // cin.getline(str,10);
    // for(char ch:str){
    //     cout<<ch<<" ";
    // }

    // char str[]= "tejas.m";
    // int len=0;
    // for(int i=0;i<str[i] != '\0';i++){
    //     len++;
    // }
    // cout<<len<<endl;
    // return 0;

    // string str = "tejas mellimpudi";//dynamic=> runtime it gets resized
    // cout<<str<<endl;
    // string str1;
    // cout<<"enter string"<<endl;
    // getline(cin,str1);
    // cout<<str1<<endl;

    string str1="tejas";
    string str2="mellimpudi";
    string str3=str1+str2;
    cout<<str3<<endl;
    cout<< (str1==str2) <<endl;
    cout<< (str1!=str2) <<endl;
    cout<< (str1<str2) <<endl;
    cout<< (str1>str2) <<endl;
    

    return 0;

}