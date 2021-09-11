#include<bits/stdc++.h>
 
using namespace std;
 
int binary(vector<int>&v, int obj){
	int l=0,r=v.size(),mid;
	while(l<r){
		mid=(r+l)/2;
		if(obj<=v[mid]){
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	return l;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int> v;
	v.push_back(0);
	int a;
	for(int i=1;i<=n;i++){
		cin>>a;
		v.push_back(a+v[i-1]);
	}
	
	int m;
	cin>>m;
	int obj;
	while(m--){
		cin>>obj;
		cout<<binary(v,obj)<<endl;
	}
	
	
	return 0;
}