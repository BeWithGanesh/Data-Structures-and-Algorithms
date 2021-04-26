// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

// function to check if character is operator or not
bool isOperator(char x) {
  switch (x) {
  case '+':
  case '-':
  case '/':
  case '*':
    return true;
  }
  return false;
}

void postfixtoPrefix(string s){
	
	stack<string> st;
	int n = s.length();
	
	// from right to left
	for(int i=0;i<n;i++){
		
		// if operator
		if(isOperator(s[i])){
			
			string op1 = st.top(); st.pop();
			string op2 = st.top(); st.pop();
			
			string temp = s[i] + op2 + op1 ;
			
			st.push(temp);
		}
		else{
			
			st.push(string(1,s[i]));
		}
		
	}
	
	cout<<st.top();
}

int main(){
	
	string exp = "ABC/-AK/L-*";
	postfixtoPrefix(exp);
	return 0;
}


// output:

// *-A/BC-/AKL