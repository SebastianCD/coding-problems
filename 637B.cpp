#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	stack<string> p;
	set<string> myset;
	set<string>::iterator it;
	for(int i=0; i<n; i++){
		cin>>s;
		p.push(s);
	}
	vector<string> v;
	for(int i=0; i<n; i++){
		if(myset.count(p.top())>0){
			p.pop();
		}
		else{
			myset.insert(p.top());
			v.push_back(p.top());
			p.pop();
		}
	}
	
	for(int i=0; i<v.size();i++){
		cout<<v[i]<<endl;
	}
	
	
	
	return 0;
}