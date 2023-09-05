#include<vector>
#include<stack>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>st; //initializing stack 
    st.push(-1); //-1 will be already exist in the stack so if we didnot find ans then we will gwt -1 as ans// since we are iterating from end of the arry to remove overhead complexity and improve efficiency
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){ //n-1 because we are starting from end of array towards the start
        int curr=arr[i]; //initializing array ele as a current ele
        while(st.top()>=curr){  //till stack top is greater than current array ele then
            st.pop(); //pop out the ele, since it is useless
        }
        ans[i]=st.top(); // if top element in stack isless than current then thats the ans 
        st.push(curr); //after getting the ans push it back to stack to return ans
    }
    return ans; //
}