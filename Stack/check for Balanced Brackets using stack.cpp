// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
	
	stack<char> s;
	char c;
	
	for(int i=0;i<str.length();i++){
		
		if(str[i] == '{' || str[i] == '(' || str[i] == '[')
		{
			s.push(str[i]);
			
		}
		else
		{
			if(s.empty())
				return false;
				
			c = s.top();
			if(str[i] == ')' && c != '(')
				return false;
			else if(str[i] == '}' && c != '{')
				return false;
			else if(str[i] == ']' && c != '[')
				return false;
			
			s.pop();
		}
	}
	
	return s.empty();
}


int main(){
	
	string str = "()(())";
	
	if(isBalanced(str))
	 cout<<"balanced"; 
	else
		cout<<"un-balanced";
	return 0;
}


// output:

// balanced