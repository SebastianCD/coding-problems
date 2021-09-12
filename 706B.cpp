#include<bits/stdc++.h>
 
using namespace std;
 
int binary(vector<int> v, int l, int r, long long int obj){
	while(l<r){
		int mid=(l+r)/2;
		if(v[mid]<=obj){
			l=mid+1;
		}
		else{
			r=mid;
		}
	}
	return l;
}
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int a;
	vector<int> v;
	cin>>n;
	int l=0,r=n;
 
	while(n--){
		cin>>a;
		v.push_back(a);
	}
	
	sort(v.begin(),v.end());
 
	int m;
	cin>>m;
 
	while(m--){
		int obj;
		cin>>obj;
		if(obj>=100000){
			cout<<v.size()<<endl;
		}
		else{
			int result= binary(v, l, r, obj);		
			if(result!=-1){
				cout<<result<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
 
	}
	
	return 0;
}