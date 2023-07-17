#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> adj[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

}