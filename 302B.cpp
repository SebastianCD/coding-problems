#include<bits/stdc++.h>
 
using namespace std;
 
int binary(long long int n, vector<long long int>&v){
	int mid;
	int l=0;
	int r=v.size();
	while(l<r){
		mid=(r+l)/2;
		if(n<=v[mid]){
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	
	return l+1;
}
 
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<long long int> v;
	long long int sum=0;
	int a,b;
	
	while(n--){
		cin>>a>>b;
		sum+=a*b;
		v.push_back(sum);
	}
	
	long long int c;
	
	while(m--){
		cin>>c;
		int result=binary(c,v);
		cout<<result<<endl;
	}	
	
	return 0;
}