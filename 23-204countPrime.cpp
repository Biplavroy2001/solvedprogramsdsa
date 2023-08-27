// Given an integer n, return the number of prime numbers that are strictly less than n.
// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.


#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
    int count=0;
    vector<bool> prime(n+1,true);//here we assume that all the numbers under n is prime(true)
    prime[0]=prime[1]=false;//and 0,1 is false since we dont consider that
    for(int i=2;i<n;i++){ //then we check all the numbers till n
        if(prime[i]){ //prime[i] is a stl templet for finding prime, here-> if prime then
            count++; //check another

              for(int j=2*i;j<n;j=j+i){ //here if any no is prime then, its all table no will be non prime, ex:'2'->4,6,8,9--
                prime[j]=0; //ie except the first no. of table all is false(non prime )
            }
           }
       
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number to check :"<<endl;
    cin>>n;
    int ans=countPrime(n);
    cout<<ans;
    return 0;

}