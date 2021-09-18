#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t,a,b;
	cin>>t;
	
	vector<pair<int,int>>v;
	
	for(int i=0; i<t*2; i++){
		cin>>a>>b;
		if(a>=b){
			v.push_back(make_pair(a,b));
		}
		else{
			v.push_back(make_pair(b,a));
		}
	}
	for(int i=0; i<t*2; i+=2){
		if(v[i].second+v[i+1].second==v[i].first && v[i].second+v[i+1].second==v[i+1].first){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}