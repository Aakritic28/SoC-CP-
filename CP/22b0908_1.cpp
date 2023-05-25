#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arr[n],sum[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum[i]=4*arr[i]+2+arr[i];
        long long int p=arr[i]-2;
        sum[i]+=(p*(p+1))-2;
    }
    for(int i=0;i<n;i++){
        cout<<sum[i]<<endl;
    }
}//time complexity= 1
