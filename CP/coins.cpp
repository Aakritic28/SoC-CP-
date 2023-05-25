#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int m=arr[i][0]/2;
        int h=arr[i][0]-2*m;
        if(arr[i][1]/2==h)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}