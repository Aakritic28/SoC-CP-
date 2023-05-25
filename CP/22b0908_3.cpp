#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    long long int arr[n][4];
    for(ll i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        long long int num=arr[i][0];
        long long int k=arr[i][1];
        long long int b=arr[i][2];
        long long int s=arr[i][3];
        long long int a[num];
        for(ll j=0;j<num-1;j++){
            a[j]=0;
        }
        if(s<(b+1)*k && s>=b*k){
            a[num-1]=s;
            for(int j=0;j<num;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        else if(s>=(b+1)*k){
            a[num-1]=b*k+k-1;
            long long int f=s-a[num-1];
            int c=f/(k-1);
            int l=f%(k-1);
            for(int j=num-2;j>num-2-c;j--){
                a[j]=k-1;
            }
            a[num-2-c]=l;
            long long int sum=0;
            for(int j=0;j<num;j++){
               sum+=a[j];
            }
            if(sum==s){
                for(int j=0;j<num;j++){
               cout<<a[j]<<" ";
            }
            }
            else cout<<-1;
            cout<<endl;
        }
        else {cout<<-1;cout<<endl;}

    }
}