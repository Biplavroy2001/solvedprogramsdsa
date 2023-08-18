#include <bits/stdc++.h>
#include<stack>
using namespace std;
void solve(stack<int>& myStack, int x) {
    if(myStack.empty()){ //if my stack is empty then directly we can push the element
        myStack.push(x); // pushele into stack
        return ;
    }
    else{ //if there is already element exist then
         
         int topEle=myStack.top(); //init var to store top element so we can pop out the top ele and store in var to avoid nullidity
         myStack .pop(); // pop out the element
         solve(myStack,x); //as now stack is empty, recall the fun so element can be filled 
         myStack.push(topEle); //as now the target ele is pushed now the top ele which is popped out that canbe pushed again
         
         
         }
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x); //function call
    return myStack; //return mystack
}






//first method---
/*#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    if (myStack.empty()) {
        myStack.push(x);
        return myStack;
    }

    int topElement = myStack.top();
    myStack.pop();

    myStack = pushAtBottom(myStack, x);
    myStack.push(topElement);

    return myStack;
}
*/