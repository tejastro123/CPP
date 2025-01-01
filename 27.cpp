#include <iostream>
#include <vector>
#include <list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>

using namespace std;

//C++ & STL(standard template library)
/*1.containers 2.iterators 3.algorithms 4.functors*/

// vector,list,deque are sequencial containers

//VECTOR (dynamic & resize)
/*size & capacity , push_back & pop_back , emplace_back , at() or[] , front & back*/
/*erase,insert,clear,empty*/
// int main()
// {
//     vector<int> vec = {1,2,3,4}; //size=0
//     vec.push_back(5) ;
//     vec.emplace_back(6); 
//     // vec.pop_back();
//     // cout << vec.size() << endl; //size=4
//     // cout<< vec.front()<<endl;
//     // cout<< vec.back()<<endl;
    
//     vec.erase(vec.begin()+1,vec.begin()+3);
//     vec.insert(vec.begin()+1,7);
//     vec.clear();
//     cout<< "is empty : "<<vec.empty()<<endl;
//     for(int val : vec){
//         cout<< val;
//     }
// }
/*vec.begin , vec.end - it pointes to first & last element(n) of vector respectively*/
/*vec.rbegin() , vec.rend() - reverse iterators*/
// int main()
// {
//     vector<int> vec = {1,2,3,4,5,6,7};

//     vector<int>::iterator it1 = vec.begin();
//     vector<int>::iterator it2 = vec.end();
//     vector<int>::reverse_iterator it3 = vec.rbegin();
//     vector<int>::reverse_iterator it4 = vec.rend();
//     //with help of "auto" keyword no need of above 4 lines.
    
//     for(it1; it1 != it2; it1++){
//         cout<< *(it1) << endl;
//     }
//     for(it3; it3 != it4; it3++){
//         cout<< *(it3) << endl;
//     }

// }


//LIST (dynamic & resize)
/*push_back & pop_back , emplace_back & emplace_front , at() or[] , push_front & pop_back*/
/*insert,erase,clear,empty,front,back,size,begin,end,rbegin,rend*/
/*it is a doublly linked list but random acesses is not possible*/
// int main()
// {
//     list<int> lst = {1,2,3,4,5};
//     lst.push_back(6);
//     lst.push_front(0);
//     lst.pop_back();
//     lst.pop_front();

//     for(int val : lst){
//         cout<< val << " ";
//     }
// }

//DEQUE
/*push_back & pop_back , emplace_back & emplace_front , at() or[] ,push_front & pop_front */
/*insert,erase,clear,empty,front,back,size,begin,end,rbegin,rend*/
/*it is a double ended queue with dynamic arrays & ranom acesses is possible*/
// int main()
// {
//     deque<int> dq = {1,2,3,4,5};
//     dq.push_back(6);
//     dq.push_front(0);
//     dq.pop_back();
//     dq.pop_front();
//     dq.insert(dq.begin(), 10);
//     for(int val : dq){
//         cout<< val << " ";
//     }
//     cout<<dq[4];
// }

//PAIR is special
// int main()
// {
//     // pair<int, string> p1= {10, "Hello"};
//     // pair<int, string> p2= {20, "World"};
//     // pair<int, pair<int, string> >p3= {30,{40,"tejas"}};
//     // cout<<p1.first<< " "<<p1.second<<endl;
//     // cout<<p2.first<< " "<<p2.second<<endl;
//     // cout<<p3.first<< " "<<p3.second.first<<" "<<p3.second.second<<endl;
    
//     vector<pair<int,int>> vec= { {1,2}, {3,4} };
//     vec.push_back({5,6});//insert only as pair
//     vec.emplace_back(7,8);//in-palce objects by create pair
//     for(auto &p : vec){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

// }

//NON-sequencial containers:- 

//STACK (last in first out)
/*push,emplace,top,pop,size,empty,swap*/
/*time complexity of above operations is O(1)*/
// int main()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     while (!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     stack<int> st2;
//     st2.swap(st);

//     cout<<st.size()<<endl;
//     cout<<st2.size()<<endl;

// }

//QUEUE (first in first out)
/*push,emplace,front,pop,size,empty,swap*/
/*all above operations have O(1) time complexity*/
// int main()
// {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     // while (!q.empty()){
//     //     cout<<q.front()<<endl;
//     //     q.pop();
//     // }
//     queue<int> q2;
//     q2.swap(q);
//     cout<<q.size()<<endl;
//     cout<<q2.size()<<endl;

// }

//PRIORITY QUEUE (max heap)
/*push,emplace-O(logn), top-O(i), pop-O(logn)*/
// int main()
// {
//     priority_queue<int> pq;
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(1);
//     pq.push(5);
//     pq.push(3);
//     while (!pq.empty()){
//     cout<<pq.top()<<endl;
//     pq.pop();
//    }
//     cout<<pq.size()<<endl;
//     while (!pq.empty()){
//         cout<<pq.top()<<endl;
//         pq.pop();
//     }
    

// }

//MAP (key,value)
/*it is self balancing tree*/
/*insert,erase,find-O(logn),size-O(1),empty-O(1)*/
/*insert,emplace,count,erase,find,size,empty,erase*/
// int main()
// {
//     map<string, int> m;
//     m["orange"] = 5;
//     m.insert({"apple", 1});
//     m.insert({"banana", 2});
//     m.insert({"mango", 4});
//     m.insert({"cherry", 3});
//     while (!m.empty()){
//     cout<<m.begin()->first<<endl;
//     m.erase(m.begin());
//     }
//     for(auto p:m){
//     cout<<p.first<<" "<<p.second<<endl;
//     }// map by default sorts keys in ascending order

//     if(m.find("apple") != m.end()){
//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }    
//     cout<<m.count("apple")<<endl;
//     m.erase("apple");
//     cout<<m.count("apple")<<endl;
// }

//MULTI-MAP & UNORDERED-MAP
//can not use [] , nor random access 
//tc of insert,erase,find,count is O(1) in unordered_map
// int main()
// {
//     multimap<int, string> m;
//     m.insert({1, "apple"});
//     m.insert({2, "banana"});
//     m.insert({1, "cherry"});
//     m.insert({3, "cherry"});
//     m.erase(m.find(1));
//     for(auto p:m){
//       cout<<p.first<<" "<<p.second<<endl;
//     }
//     unordered_map<int, string> m;
//     m.insert({1, "apple"});
//     m.insert({2, "banana"});
//     m.insert({1, "cherry"});
//     m.insert({3, "cherry"});
//     m.erase(m.find(1));
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<m[3]<<endl; // if key not found it will return default value of type string which is "" in this case
//     cout<<m.at(2)<<endl; // if key not found it will throw an exception
//     cout<<m.count(1)<<endl; // count of key 1 in the map
// }

//SET
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    for(auto p:s){
        cout<<p<<endl;
    }
    s.erase(3);
    for(auto p:s){
        cout<<p<<endl;
    }

}