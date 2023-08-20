#include<iostream>
#include<stack>
using namespace std;
//to solve this type of reverse pblm in stack we have to note that. 1> first we havt to pop the top element then we should use staregy of insert at bottom in this way the top ele  every time will be inserted at bottom hence it will be automatically reversed
void insertAtBtm(stack<int> &stack,int x){
    if(stack.empty()){
        stack.push(x);
        return ;
    }
    else{
        int num = stack.top();
        stack.pop();
        insertAtBtm(stack,x);
        stack.push(num);
    }
}
void reverseStack(stack<int> &stack) {
    //base case
    if(stack.empty()){ // at first we check wheter stack is empty or not..if empty then return nothing
        return ;
    }
    else{ //if not empty then
        int num = stack.top(); //init var for the top ele
        stack.pop(); //then pop out the top ele
        reverseStack(stack); //again recursive call for ame process
        insertAtBtm(stack,num); // the first popped element will be inserted at bottom
    }
}