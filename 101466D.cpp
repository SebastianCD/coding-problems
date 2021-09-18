#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int monedas=0;
	stack<char> s;
	cin>>monedas;
	while(monedas!=0){
	    if(monedas%2==0){
	    	monedas=(monedas-2)/2;
	    	s.push('B');
	    }
	    else{
	    	monedas=(monedas-1)/2;
	    	s.push('A');
		}
    }
    while(!s.empty()){
    	cout<<s.top();
    	s.pop();
	}
    return 0;
}