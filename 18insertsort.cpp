#include<iostream>
using namespace std;
int InsertSort(int arr[],int n)
{
    int ans;
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]= arr[j];
            }
            else{
                break;
            }

           }  
           arr[j+1]=temp; 
           }
           return ans;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={5,4,6,8,7,9};
    int ans=InsertSort(arr,6);
    cout<<ans;
    return 0;

}