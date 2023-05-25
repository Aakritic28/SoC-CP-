#include<iostream>
using namespace std;
bool subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=arr[i];
        if(sum==0)return true;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            
            if(sum==0)return true;
        }
        

    }return false;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    }
if(subarray)cout<<"yes";
else cout<<"no";

}