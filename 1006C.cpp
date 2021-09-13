#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a;
	set<long long int> sum;
	long long int l=0;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
		l+=a;
		sum.insert(l);
	}
	long long int r=0,ans=0;
	for(int i=n-1;i>=0; i--){
		sum.erase(l);
		l-=v[i];
		r+=v[i];
		if(sum.count(r)){
			ans=max(r,ans);
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}