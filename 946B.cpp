#include<bits/stdc++.h>
 
using namespace std;
 
void paso1(long long int a,long long int b);
void paso2(long long int a,long long int b);
void paso3(long long int a,long long int b);
 
 
int main(){
	long long int a,b;
	cin>>a>>b;
	paso1(a,b);
	
	return 0;
}
 
void paso1(long long int a,long long int b){
	if(a==0||b==0){
		cout<<a<<" "<<b<<endl;
	}
	else{
		paso2(a,b);
	}
}
 
void paso2(long long int a,long long int b){
	if(a>=2*b){
		a=a%(2*b);
		paso1(a,b);
	}
	else{
		paso3(a,b);
	}
	
}
 
void paso3(long long int a,long long int b){
	if(b>=2*a){
		b=b%(2*a);
		paso1(a,b);
	}
	else{
		cout<<a<<" "<<b<<endl;
	}
}