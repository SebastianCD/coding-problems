#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n, sum=0 ,l;
	
	cin>>n;
	l=n;
	vector<int> v;
	
	while(n--){
		int a;
		
		cin>>a;
		
		sum+=a;
		
	}
	
	while(l--){
		int a;
		
		cin>>a;
		
		v.push_back(a);
	}
	
	sort(v.rbegin(), v.rend());
 
	if(sum>(v[0]+v[1])){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	
}