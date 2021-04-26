// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

int prec(char c){
	if(c == '^') return 3;
	else if(c == '*' || c == '/') return 2;
	else if(c == '+' || c == '-') return 1;
	else return -1;
}

string infixtoPostfix(string s){
	
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
		else if(c == ')'){
			st.push(c);
		}
		
		//if ')'
		else if(c == '('){
			while(!st.empty() && st.top() != ')'){
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
	
	return res;
}

int main(){
	
	string infix = "(a-b/c)*(a/k-l)";
	int l = infix.length();
	
	// Reverse infix
    reverse(infix.begin(), infix.end());
    
    string prefix = infixtoPostfix(infix);
    
    // Reverse prefix
    reverse(prefix.begin(), prefix.end());
  
  
	cout<<prefix;
}


// output:

// *-a/bc-/akl