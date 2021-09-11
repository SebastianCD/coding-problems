#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n,k,dat,r=0,l=0;
	cin>>n>>k;
	
	map<int, int> m;
	vector<int> v;
	
	for(int i=0; i<n ;i++){
		cin>>dat;
		v.push_back(dat);
	}
	
	for(r; r<n ; r++){
		if(m.count(v[r])){
			m[v[r]]++;
		}
		else{
			m[v[r]]++;
		}
		if(m.size()==k){
			break;
		}
	}
 
	while(l<=r){
		if(m.count(v[l]) && m[v[l]]>1){
			m[v[l]]--;
			l++;
		}
		else{
			break;
		}
	}
	if(m.size()==k){
		cout<<l+1<<" "<<r+1<<endl;
	}
	else{
		cout<<"-1 -1"<<endl;
	}
	
	
	return 0;
}