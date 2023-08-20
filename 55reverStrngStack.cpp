#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "biplove"; //init string
    stack<char>s; //init stack
    for(int i =0; i<str.length();i++){
        char ch = str[i]; //var
        s.push(ch); //put all the ele one by one into the stack
    }
    string ans="";
    while(!s.empty()){ //till the last ele
        char ch = s.top(); // top ele = ch
        ans.push_back(ch);//go to all element
        s.top();// and show the top
       
    }
     cout<<"answer is :"<<ans<<endl;
        return 0;


}