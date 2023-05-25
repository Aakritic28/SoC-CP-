#include<iostream>
using namespace std;
void mergearray(int num1[],int num2[],int num3[],int m,int n){
int cp1=0,cp2=0,cp3=0;
while(cp1<m || cp2<n){
    if(num1[cp1]<num2[cp2])num3[cp3++]=num1[cp1++];
    else if(num1[cp1]>num2[cp2])num3[cp3++]=num2[cp2++];
    else{ num3[cp3++]=num1[cp1++]; cp2++;}
    }
    if(cp1<m){
        while(cp1<m){num3[cp3++]=num1[cp1++];}}
    else if(cp2<n){
        while(cp2<n){num3[cp3++]=num2[cp2++];}}

}

int main(){
  int m,n;
  cin>>m>>n;
  int num1[m],num2[n],num3[m+n];
  for(int i=0;i<m;i++){
   cin>>num1[i];
  }
  for(int i=0;i<n;i++){
   cin>>num2[i];
  }
mergearray(num1,num2,num3,m,n);

int g=sizeof(num3)/sizeof(num3[0]);
if(g%2==1){float h=num3[g/2];cout<<h;}
else {float k=(num3[g/2]+num3[(g/2)-1]);
float p=2;

cout<<k/p;}

}
