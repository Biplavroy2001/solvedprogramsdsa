// Given an array of characters chars, compress it using the following algorithm:
// Begin with an empty string s. For each group of consecutive repeating characters in chars:
// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
// After you are done modifying the input array, return the new length of the array.
// You must write an algorithm that uses only constant extra space.   Example 1:
// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int compress(vector<char>& chars){
    int i=0,ans=0;
    int ansIndex=0; //ansindex for storing ans chars
    int n=chars.size(); //chars size
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){ //if char[i]==char[i+1] then goes on ahead till get diff char
            j++;
        }
        chars[ansIndex++]=chars[i]; //store the first char ex "a" first of all ,if we get multiple a
        int count=j-i; //it is for no.of times (a)|| chars repeated
        if(count>1){ //if chars repeates more than 1time then
            string cnt=to_string(count); //first of all convers the count no. to string
            for(char ch:cnt){ //initialization
                chars[ansIndex++]=ch; //store that count value to ansIndex
            }
        }
        i=j;//if u get diff chars then shift i to the jTh place ans start again iterating
    }
    return ansIndex;
}
// int iterate( chars){
//     for(int i=0;i<chars[i];i++){
//         cout<<chars;
//     }
//}
int main(){
    char chars[20];
    cout<<"enter the characters :"<<endl;
    cin>>chars;
    int ans=compress(chars);
    cout<<ans;
    return 0;
}