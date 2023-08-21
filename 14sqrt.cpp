#include<iostream>
using namespace std;
int sqrtBS(int x){
    int start=0;
    int end=x;
    int mid= start+(end-start)/2;
    if(x==1)
    return 1;

    int ans;
    int square=mid*mid;
    while(square<=end){
        if(square==x){
            return mid;
        }
        if(square<x){
            start=mid+1;
            ans= mid;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;


    }
    return ans;

}
int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    //int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int squareroot=sqrtBS(x);
    cout<<"the square root of"<<x<< "is:"<<squareroot;
    return 0;

}