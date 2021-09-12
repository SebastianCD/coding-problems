#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,k,m=0,l=0;
	string s;
	cin>>n>>k;
	s=to_string(n);
	reverse(s.begin(),s.end());
	if(pow(10,k)>n && s[0]=='0'){
		cout<<s.size()-1<<endl;
	}
	else{
		int i=0;
		while(m<k && i<s.size()){
			if(i!=s.size()-1){
				if(s[i]=='0'){
					m++;
				}
				else{
					if(s[i]!='a'){
						s[i]='a';
						l++;		
					}
				}
				i++;
			}
			else{
				cout<<s.size()-1<<endl;
				i++;
				exit(0);
			}
 
		}
		cout<<l<<endl;
	}
	
	return 0;
}