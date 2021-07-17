 						/* program to convert lowercase characters into uppercase  */

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1;
	cout<<"Enter a string:\n";
	getline(cin,str1);

	for(int i=0;i<str1.length();i++){
		if(str1[i]!=' '){
			str1[i] -= 32;
		}
	}
	cout<<str1;

	return 0;
}