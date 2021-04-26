// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

int prec(char c){
	if(c == '^') return 3;
	else if(c == '*' || c == '/') return 2;
	else if(c == '+' || c == '-') return 1;
	else return -1;
}

void infixtoPostfix(string s){
	
	stack<char> st;
	string res;
	
	int n = s.length();
	for(int i=0;i<n;i++){
		char c = s[i];
		
		// if operand
		if((c >= 'a' && c <= 'z') || (c >='A' && c<='Z') || (c>='0' && c<='9')){
			res += c;
		}
		
		//if '('
		else if(c == '('){
			st.push(c);
		}
		
		//if ')'
		else if(c == ')'){
			while(!st.empty() && st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop(); //that bracket
		}
		
		// if less precedence
		else{
			
			while(!st.empty() && prec(s[i]) <= prec(st.top())) {
			res += st.top();
			st.pop();
			}
		
		st.push(c);
		}
	}
	
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	
	cout<<res;
}

int main(){
	
	string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixtoPostfix(exp);
  
	return 0;
}


// output:

// abcd^e-fgh*+^*+i-