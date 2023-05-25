#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    long long int n,l;
    cin>>n>>l;
    vector<long long int>v;
    for(long long int i=0;i<n;i++){
        long long int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
   long long  int max=v[0];
    for(long long int i=1;i<n;i++){
        if(v[i]-v[i-1]>max)max=v[i]-v[i-1];
    }
   long long int g=l-v[n-1];
    cout<<fixed;
    cout.precision(10);
    if(max/2>=g&& max/2>=v[0]){double a=max;double o=2;
    double b=a/o;
    cout<<b;
    }
    else if(g>=max/2&& g>=v[0]){double a=g;cout<<a;}
    else if(v[0]>=g&&v[0]>=max/2){double a=v[0];cout<<a;}

}//(nlog(n)) and for finding the max value (n-1)