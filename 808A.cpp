#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int a,b;
	string s;
	
	cin>>a;
	
	s=to_string(a);
	b=s[0]-'0'+1;
	
	
	for(int i=1; i<s.size(); i++){
		b*=10;
	}
	
	cout<<b-a<<endl;
	
	return 0;
}