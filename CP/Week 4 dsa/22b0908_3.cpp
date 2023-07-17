#include<iostream>
#include<string>
using namespace std;
string construct_bit_string(int n){
    string result="";
    for(int i=0;i<n;i++){
        result+="0"; }
    for(int i=0;i<n;i++){
        result+="1"; }
    result+="0";
    for(int i=2;i<n;i++){
        result+="1";
        for(int j=0;j<i;j++){
            result+="0";
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    string bit=construct_bit_string(n);
    cout<<bit;
}