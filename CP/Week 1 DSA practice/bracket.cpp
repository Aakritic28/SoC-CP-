#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
bool bracketcheck(string epr){
    stack<char> temp;
   
    for(int i=0;i<epr.length();i++){
       
        if(temp.empty()){
            temp.push(epr[i]);
        }
       
     else if((temp.top()=='(' && epr[i]==')')||(temp.top()=='{' && epr[i]=='}')||(temp.top()=='[' && epr[i]==']'))temp.pop();
        else{
            temp.push(epr[i]);
        }
    }
    if(temp.empty()){
        return true; 
        }
    else return false;

}
int main(){
    string epr="{[]}(){}";
    if(bracketcheck(epr)){
        cout<<"it is balanced";

    }
    else cout<<"it is not balanced";
}