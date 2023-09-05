#include<stack>
#include<vector>
#include<climits>
#include<bits/c++io.h>
#include<iostream>
using namespace std;

class Solution {
    private:
    vector<int>nextSmallerElement(vector<int> arr,int n){
        stack<int> s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
        
    }
    vector<int>prevSmallerElement(vector<int> arr,int n){
        stack<int> s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int curr=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n); //initializing next
        next=nextSmallerElement(heights,n); //functiom call for finding nex ele
        vector<int> prev(n); // init prev ele
        prev=prevSmallerElement(heights,n); //fun call for finding prev ele
        int area = INT_MIN ; 
        for(int i=0;i<n;i++){ //loop for iterating every ele
            int len=heights[i]; //init length is equal to height of each ele[i]        
             if(next[i]==-1){ // condition if there is no ele further then last ele will be the next elem
                next[i]=n;
            }
            int bre=next[i]-prev[i]-1; // and breadth is equal to last match height - prev of prev match ele -1; ie. n-p-1
           
            int newArea=len*bre; //calcu area
            area=max(area,newArea); // we hav to take max area of all areas comming over multiple solution ie. in his pblm there are 5 ones solution ,for 2s =8 solution and for 5 =10. ie maxArea =10
        }
        return area;
    }
};