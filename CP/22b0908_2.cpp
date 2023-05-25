#include<iostream>
#include<math.h>
using namespace std;
 long long int knight(long long int h) {
  long long int p=2;
   long long  int g=(h*h)*(h*h-1)/p;
    long long int k=(h-1)*(h-2)*4;
  
    return g-k;
    }
int main(){
    long long int n;cin>>n;long long int arr[n];
   
    
      for(long long int i=0;i<=n-1;i++){ 

            arr[i]=knight(i+1);
               }
for(long long int i=0;i<n;i++){
cout<<arr[i]<<endl;}

}

