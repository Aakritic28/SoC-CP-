#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1={20, 30, 40, 25, 15};
    make_heap(v1.begin(), v1.end());
    cout<<"the maximum element of the heap is: ";
    cout<<v1.front()<<endl;
    return 0;
}