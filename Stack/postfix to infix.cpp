// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

bool isOperand(char x){
	return (x >= 'a' && x<='z') || (x>='A' && x<='Z');
}

void postfixtoInfix(string s){
	stack<string> st;
	int n = s.length();
	
	for(int i=0;i<n;i++){
		
		if(isOperand(s[i])){
			string op(1,s[i]);
			st.push(op);
		}
		else{
			string op1 = st.top(); st.pop();
			string op2 = st.top(); st.pop();
			
			st.push("(" + op2 + s[i]+ op1+ ")");
		}
	}
	
	cout<<st.top();
}

int main(){
	
	string exp = "ab*c+";
	postfixtoInfix(exp);
	return 0;
}


// output:

// ((a*b)+c)