include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,m;
	cin>>n>>m;
	string s;
	vector<string> v1;
	vector<string> v2;
	for(int i=0; i<n; i++){
		cin>>s;
		v1.push_back(s);
	}
	
	for(int i=0; i<m; i++){
		cin>>s;
		v2.push_back(s);
	}
	
	int p=0;
	for(int i=0; i<v2.size(); i++){
		for(int j=0; j<v1.size(); j++){
			if(v2[i]==v1[j]){
				p++;	
			}
		}
	}
	
	n-=p;
	m-=p;
	
	if(p%2==0){
		if(n<=m){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	else{
		if(n<m){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	
	
	
 
	
	
	
	return 0;
}