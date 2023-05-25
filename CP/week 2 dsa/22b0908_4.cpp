
#include<math.h>
#include<cstdlib>
#include<iostream>
using namespace std;

void sort(int arr[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx])min_idx=j;
        }
        if(min_idx!=i)swap(arr[min_idx],arr[i]);
    }
}
int main(){
int n;int l;
cin>>n>>l;int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 int a[n*(n-1)];int k=0;
 for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
             a[k++]=abs(arr[j]-arr[i]);
            }
        }
sort(a,n);
cout<<a[l-1];



}
