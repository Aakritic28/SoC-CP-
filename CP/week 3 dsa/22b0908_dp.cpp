#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
#define INF 1e9;
const int N=501;
int dp[N][N];

int go(int n, int m){
 if(n==m)return 0;
if(n==1) return m-1;
if(m==1)return n-1;
if(dp[n][m]!=-1)return dp[n][m];
if(dp[m][n]!=-1)return dp[m][n];
dp[n][m]=INF;
for(int x=1;x<=n-1;x++){
dp[n][m]=min(dp[n][m],go(x,m)+go(n-x,m)+1);
}
for(int y=1;y<m;y++){
dp[n][m]=min(dp[n][m], go(n,y)+go(n,m-y)+1);
}
return dp[n][m];
}
int main(){
int n,m;
cin>>n>>m;
memset(dp,-1,sizeof dp);
cout<<go(n,m)<<endl;
}

