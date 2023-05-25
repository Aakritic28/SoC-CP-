#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq={1,2,3,4,5};
    deque<int>::iterator it=dq.begin();
    dq.insert(it, 3, 6);
    cout<<"Deque contains: ";
    for(it=dq.begin(); it!=dq.end();++it)
    cout<<" "<<*it;
    cout<<"\n";
    return 0;
}