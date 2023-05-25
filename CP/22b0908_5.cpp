#include<iostream>
using namespace std;

int main(){
   long long  int m;
    cin>>m;
    
   long long int arr[m][2];
   long long int f[m][200000];
   long long int g[200000][3];
   for(int i=0;i<m;i++){
    cin>>arr[i][0]>>arr[i][1];
    for(long long int j=0;j<arr[i][0];j++){
      cin>>f[i][j];
    }
    for(long long int y=0;y<arr[i][1];y++){
      for(int i=0;i<3;i++){
      cin>>g[y][i];
    }
    }
   }
   for(long long int i=0;i<m;i++){
    for(long long int y=0;y<arr[i][1];y++){
     for(long long int k=g[y][0]-1;k<g[y][1];k++){
      f[i][k]=g[y][2];
     }
     
     long long int sum=0;
     for(long long int j=0;j<arr[i][0];j++){
      
      sum+=f[i][j];
    }
    if(sum%2==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   }
}
