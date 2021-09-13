#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a,m;
	vector<int> v;
	cin>>n>>m;
	while(n--){
		cin>>a;
		v.push_back(a);
	}
	
	int l=0,r=v.size();
	
	sort(v.begin(),v.end());
	
	int mayor=v[v.size()-1]+m;
	
	int menor;
	
	while(m>0){
		sort(v.begin(),v.end());
		v[0]++;
		m--;	
	}
	
	sort(v.begin(),v.end());
	
	menor=v[v.size()-1];
	
	cout<<menor<<" "<<mayor<<endl;
	
	return 0;
}
