#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v1={20,70,50,40,80};
    make_heap(v1.begin(),v1.end());
    cout<<"the initial heap :";
    for(auto i:v1){
        cout<<i<<" ";
    }
}