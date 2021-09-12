#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s;
	int n;
	int d[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	cin>>s>>n;	
	for(int i=0; i<s.size(); i++){
		d[s[i]-'a']++;
	}
	int x=0,y=0;
	
	for(int i=0; i<26; i++){
		if(d[i]>0){
			x++;
			if(d[i]>1){
				y+=d[i]-1;
			}
		}
	}
	
	if(x>=n){
		cout<<0<<endl;
	}
	else{
		n-=x;
		if(y>=n){
			cout<<n<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
	
	
	
	return 0;
}