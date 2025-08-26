#include<bits/stdc++.h>

using namespace std;


string reverseString(string str){
	
	stack<char> s;
	
	for(char ch:str){
		s.push(ch);
	}
	
	string reversed = "";
	while(!s.empty()){
		reversed += s.top();
		s.pop();
	}
	
	
	return reversed;
}
int main(){

	string str = "DataStructures";
	string reverseS = reverseString(str);
	cout<<reverseS<<endl;
	return 0;
	
}
