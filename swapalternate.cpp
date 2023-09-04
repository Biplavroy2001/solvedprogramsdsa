#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<=size;i++){
         
        cout<<arr[i];
    }
    cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<=size;i+=2){
        if(i+1<=size){
            swap(arr[i],arr[i+1]);
        }
        cout<<" ";
    }

}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={5,6,7,8,9};
    swapAlternate(arr,6);
    cout<<endl<<" ";
    swapAlternate(brr,5);
    printArray(arr,6);
    cout<<endl<<" ";
    printArray(brr,5);
     
     return 0;
}
