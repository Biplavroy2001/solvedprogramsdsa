#include<iostream>
using namespace std;
int add(int arr[],int size){
    int sum=0;
    for(int i=0;i<=size;i++){
         sum=sum+arr[i];
        cout<<"the sum of"<<arr[i]<<"is:"<<sum;
         
    }
   return 0;
}
int main(){
    int arr[5]={2,3,4,5,6};
    add(arr, 5);
    int sum=0;
    for(int i=0;i<=5;i++){
        int sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return sum;
}