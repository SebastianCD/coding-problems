#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	double n,l,dat;
	cin>>n>>l;
	vector<double> v;
 
 
	for(int i=0; i<n; i++){
		cin>>dat;
		v.push_back(dat);
	}
	
	sort(v.begin(),v.end());
	double r;
	r=max(v[0]-0,l-v[v.size()-1]);
	vector<double> d;
	
	for(int i=0;i<n-1;i++){
		d.push_back(v[i+1]-v[i]);	
	}
	
	sort(d.begin(),d.end());
	
	if(d.size()>0){
		if(r<(d[d.size()-1]/double(2))){
			cout<<fixed<<setprecision(9)<<d[d.size()-1]/double(2)<<endl;
		}
		else{
			cout<<fixed<<setprecision(9)<<r<<endl;
		}
	}
	else{
		cout<<fixed<<setprecision(9)<<r<<endl;
	}
 
	return 0;
}