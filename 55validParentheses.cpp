#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string expression)
{
    stack<char>s;//init stack as s to perform operation into stack
    for(int i=0; i<expression.length();i++){
        char ch =expression[i]; //init ch which is all ele of strings
        if(ch=='(' || ch=='{' || ch=='['){ 
            s.push(ch); //store ele into stack only if the above condition satisfy
        }
        else{
          if (!s.empty()) { //if there is already exixt element character tehn only
            char top =  s.top(); //init stack  s.top as top
            if( (ch == ')' && top=='(') || (ch == '}' && top=='{') ||( ch==']' && top=='[')){ //if the push element matches the partner element then pop out
                s.pop(); //remove out the element if the above condi satisfy
 }
 else{
     return false;
 }
          }
          else{
              return false;
          }
        }
    }
    if(s.empty()){ //if after the above condition the stack get empty then return true
        return true;
    }
    else{
        return false;
    }
};
int main(){
    string expression;
    int ans= isValidParenthesis(expression);
    cout<<"enter the character"<<expression<<endl;
    cout<<ans;
}