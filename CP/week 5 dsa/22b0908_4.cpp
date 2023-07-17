#include<iostream>
using namespace std;
int click(int n,int k){
    int count=0;
while(n!=k){
    if(k<n){
        count+=n-k;
        n=k;
        break;
    }
    else{
        if(k%2==0){
            k=k/2;
            count+=1;
        }
        else{
            k=(k+1)/2;
            count+=2;
        }
    }
}
return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<click(n,k);
}