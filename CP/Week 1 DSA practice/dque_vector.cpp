#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    deque<int> dq={1,12,2,3,4,5,65};
    deque<int>::iterator it=dq.begin();
    vector<int> v(2,10);
    dq.insert(it,v.begin(), v.end());
    cout<<"deque contains : ";
    for(it=dq.begin();it!=dq.end();++it)
    cout<<" "<<*it;
    cout<<"\n";
    deque<int> mydeque={1,2,4,5,6,7,9};
    deque<int>::iterator it1,it2;
    it1=mydeque.begin();cout<<*it1<<"    ";
    it2=mydeque.end();
    it2--;it2--;
    mydeque.erase(it1,it2);
    for(auto it=mydeque.rbegin();it!=mydeque.rend();++it){
        cout<<" "<<*it;
    }
    cout<<*dq.begin();
    }