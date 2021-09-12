#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,m;
	
	cin>>n;
	
	m = n;
	
	int acumulado=0;
	
	int i=1;
	
	vector<int> v;
	
	while(acumulado<n){
		if((n-acumulado-i)>i ||(n-acumulado-i)==0){
			v.push_back(i);
			acumulado+=i;
		}
		i++;
	}
	cout<<v.size()<<endl;
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}