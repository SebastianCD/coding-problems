#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	while(n--){
		int cont=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]!='0'){
				cont++;
			}
		}
		cout<<cont<<endl;
		for(int i=0;i<s.size();i++){
			if(s[i]!='0'){
				cout<<s[i];	
				for(int j=0; j<s.size()-i-1;j++){
					cout<<0;
				}
			}
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}