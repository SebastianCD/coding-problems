#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,t;
	cin>>t;
	
	vector<int> v;
	
	for(int i=0; i<t; i++){
		cin>>n;
		v.push_back(n);		
	}
	for(int i=0; i<t; i++){
		cout<<v[i]<<endl;
	}
		
 
	
	return 0;
}