#include <iostream>
#include <vector>
#include<algorithm>
#include<math.h>


using namespace std;
int power(int n,const vector<int>& avengers,int &sum,int l,int A,int B){
    int g=pow(2,n);int k=0;
    for(int i=1;i<=g;i+2 ){
        for(;k<l;k++){
        if(avengers[k]==i ){
            if(avengers[k+1]==i+1){sum+=2*B;k++;}
            else sum+=A+B;
        }
        else sum+=A;
    }
    }
    return sum;
}

int main() {
    int n, k, A, B;
    cin >> n >> k >> A >> B;
    vector<int> avengers(k);
    for (int i = 0; i < k; i++)
        cin >> avengers[i];
   
   int sum=0;
   sum=power(n,avengers,sum,k,A,B);

    return 0;
}
