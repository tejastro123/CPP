#include <iostream>
#include <vector>
using namespace std;
//C++ & STL(standard template library)
/*1.containers 2.iterators 3.algorithms 4.functors*/

//VECTOR (dynamic & resize)
/*size & capacity , push_back & pop_back , emplace_back , at() or[] , front & back*/
int main()
{
    vector<int> vec = {1,2,3,4}; //size=0
    vec.push_back(5) ;
    vec.emplace_back(6); 
    vec.pop_back();
 
    for(int val : vec){
        cout<< val;
    }
    cout<< vec.front()<<endl;
    cout<< vec.back()<<endl;
    return 0;
}
    