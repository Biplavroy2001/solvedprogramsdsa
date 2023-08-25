
#include<iostream>
#include<string>
using namespace std;

int ans=0;
string replaceSpaces(string &str){
	string temp ="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			temp.push_back('@');
			temp.push_back('4'); 
			temp.push_back('0');

		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
void print (string str){
    for(int i =0;i<str.length();i++){
        cout<<str[i];

    }

}
int main(){
    char ch[20];
    string str;
    cout<<"enter string :"<<endl;
    cin>>ch;
    replaceSpaces(str);
    cout<<"after replacing spaces :"<<replaceSpaces(str)<<endl;
    return 0;

}
