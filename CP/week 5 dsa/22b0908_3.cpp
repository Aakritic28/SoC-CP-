#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a;
    vector<int> b;

for(int i=0;i<m;i++){
    int s,e;
    cin>>s>>e;
    a.push_back(s);
    b.push_back(e);
}


 if(m==n || m==n-1){
 int count[n]={0},g=0,p=0,q=0;
 for(int i=0;i<m;i++){
   for(int j=1;j<=n;j++){
    if(a[i]==j || b[i]==j)count[j-1]++;
   }
 }

for(int i=0;i<n;i++){
    if(count[i]==2)p++;
    if(count[i]==1)q++;
    if(count[i]==m)g++;

}
if(p==n-2 && q==2)cout<<"bus topology";
else if(p==n)cout<<"ring topology";
else if(g==1 && q==n-1)cout<<"star topology";
else cout<<"unknown topology";
}

else cout<<"unknown topology";
}



