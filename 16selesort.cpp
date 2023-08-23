#include<iostream>
using namespace std;
int SelectionSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j; 
            }
        }
        swap(arr[minIndex],arr[i]);
        
    }
    return ;
};
int main(){
    int arr[6]={3,2,6,5,4,7};
    int selectsort=SelectionSort(arr,6);
    cout<<"element after sort"<<selectsort<<endl;
    return 0;
}