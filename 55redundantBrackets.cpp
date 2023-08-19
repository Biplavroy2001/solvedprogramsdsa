// Given a string of balanced expression, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Print Yes if redundant, else No.
// Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.
//In an arithmetic expression, redundant brackets refer to the presence of unnecessary or extra parentheses that do not affect the overall evaluation of the expression. These redundant brackets can be removed without changing the result of the expression.


//#include <bits/stdc++.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    bool checkRedundancy(string s) {
        stack<char> st; //init stact as st for pop and push operation
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i]; //init ch as individual char of string
            if (ch == '-' || ch == '+' || ch == '*' || ch == '/' || ch == '(') { // if this will be the char then
                st.push(ch); //push into the stack 
            } else {
                bool isRedundant = true; //init redubdant as true means useless brackets
                if (ch == ')') {
                    while (!st.empty() && st.top() != '(') {
                        char top = st.top(); //init top
                        if (top == '-' || top == '+' || top == '*' || top == '/') { //if any of these was present in stack the the bracket is not useless hence return false
                            isRedundant = false;
                        }
                        st.pop(); // if the bracket is usefull then pop out the brackets and inside ele
                    }
                    if (!st.empty()) {
                        st.pop();
                    }
                    if (isRedundant == true) {
                        return true;
                    }
                } else {
                    isRedundant = false;
                }
            }
        }
        return false;
    }
};