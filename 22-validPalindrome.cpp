/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:*/

#include<iostream>
#include<string>
using namespace std;
class Solution {
    private:
    bool valid(char ch){ //checking for validation of elements set
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')||(ch>='A'&& ch<='Z')){
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch){ // to lower case conversion
         if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
         return ch;
    }
         else{
             char temp=ch-'A'+'a';
             return temp;
         }
        
    }
    bool checkPalindrome(string a){  //checking palindrome or not
        int start=0,end=a.length()-1;
        while(start<end){
            if(toLowerCase(a[start])!=toLowerCase(a[end])){
                return 0;
            }
            else{
                start++,end--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) { //creating temp string to store valid string
        string temp= "";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
            
        }
        for(int j=0;j<temp.length();j++){   // putting all lower cases element to a temp string
            temp[j]=toLowerCase(temp[j]);
        }
        return checkPalindrome(temp); //palindrome checking by calling function 
          
        
    }
};