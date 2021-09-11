#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,k,i=0;
	
	cin>>n>>k;
	
	vector<int> v;
	
	while(i<=n){
		v.push_back(i);
		i++;
	}
	
	int j=2,l;
	
	while(j<n){
		l=j;
		while(l<n){
			if(l+j<n){
				v[l+j]=0;				
			}
			l=l+j;
		}
		j++;
	}
	
	int x=0;
	vector<int> z;
	for(int i=2; i<n; i++){
		if(v[i]!=0){
			z.push_back(v[i]);
			x++;
		}
	}
	
	int g=0;
	for(int i=0; i<x; i++){
		int sum=1;
		sum+=z[i]+z[i+1];
		for(int j=0; j<x ; j++){
			if(sum==z[j]){
				g++;
			}	
		}
	}
	
	
	if(g>=k){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}