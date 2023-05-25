#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq={1,2,3,4,5,6,17};
    deque<int>::iterator it=dq.begin();++it;
    it=dq.insert(it,10);
    cout<<"Deque contains: ";
    for(it=dq.begin(); it!=dq.end();++it)
    cout<<" "<<*it;
    cout<<"\n";

}