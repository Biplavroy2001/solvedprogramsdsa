//codestudio

#include<iostream>
using namespace std;
 int BubbleSort(int arr[], int n){
    int ans;
    for( int i=1; i<n-1;i++){ //or int i=0;i<n-1;i++
        for(int j=0;j<n-i;j++){ //j<n-i; bcos id j is the econd last ele then j+1 will be the last ele
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return ans;
 }
  void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
 }
 int main(){
    int arr[5]={4,2,3,6,5};
    int ans=BubbleSort(arr,5);
    cout<<"after sort"<<endl<<ans;
    return 0;

 }

