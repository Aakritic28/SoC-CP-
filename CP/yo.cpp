#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++){
	    for(int j=0;j<2;j++){
	        cin>>a[i][j];
	    }
	}

int sum1[n],sum2[n],d[2][n];
    for(int j=0;j<n;j++){
        sum1[j]=0;sum2[j]=0;

        for(int i=0;i<j;i++){
        sum1[j]+=a[i][0];
        sum2[j]+=a[i][1];}
 if(sum1[j]>sum2[j]){d[1][j]=sum1[j]-sum2[j];d[0][j]=1;}
        else {d[1][j]=sum2[j]-sum1[j]; d[0][j]=2;
    }
    }
    int maxval=d[1][0],l;
    for(int i=1;i<n;i++){
    if(maxval<d[1][i]){maxval=d[1][i];l=d[0][i];}

    }
    cout<<l<<" "<<maxval;
    }
