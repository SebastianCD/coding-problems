#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int d[3]={0,0,0};
	string s,a="";
	cin>>s;
	for(int i=0; i<s.size() ;i++){
		if(s[i]!='+'){
			d[s[i]-'1']++;
		}
	}
	while(d[0]-->0) a+="1+";
	while(d[1]-->0) a+="2+";
	while(d[2]-->0) a+="3+";
	cout<<a.substr(0,a.size()-1);	
	
	return 0;
	
}