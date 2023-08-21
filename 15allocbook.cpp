#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>arr,int n,int st,int mid)
{
      int studentCount=1;
      int pageSum=0;
      for(int i=0;i<n;i++)
      {
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;

        if(studentCount>n ||arr[i]>mid){
            return false;
        }
        pageSum=arr[i];
        } 
      }

      return true;
}
int main(){
    int allocateBook(vector<int>arr,int n,int st){ 
        
        int start=0;
        int sum=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int end=sum;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(isPossible(arr,n,st,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
} 