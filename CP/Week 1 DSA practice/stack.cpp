#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> stack1;
    stack1.push(21);
     stack1.push(22);
      stack1.push(24);
     stack1.push(25);
     int num=49;
     stack1.push(num);
     stack <int>stack2;
     stack2.push(1);
     stack2.push(2);
      stack2.push(4);
     stack2.push(5);
     stack2.push(100);
     stack1.swap(stack2);
     while(!stack1.empty()){
      cout<<stack1.top();
        stack1.pop();
     }
     

}