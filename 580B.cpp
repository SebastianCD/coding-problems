#include<bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	int n,d;
	long long int a, b, sum, r;
	cin>>n>>d;
	vector< pair<long long int, long long int> >v(n);
	
	
	for(int i=0; i<n; i++){
		cin>>a>>b;
		v[i]=make_pair(a,b);
	}
	
	sort(v.begin(), v.end());
	
	int x=0;
	r=sum=v[0].second;
	
	for(int i=1; i<n ;i++){
		while((v[i].first-v[x].first)>=d){
			sum-=v[x].second;
			x++;
		}
		sum+=v[i].second;
		r=max(r,sum);
	}
	
	cout<<r<<endl;
	
	return 0;
}