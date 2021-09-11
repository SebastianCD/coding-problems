#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,l,sum=0;
	vector<int> v;
	cin>>n;
	l=n;
	int a;
	while(l--){
		cin>>a;
		sum+=a;
	}
	
	
	int fing=0;
	
	if((sum+1)%(n+1)!=1){
		fing++;
	}
	if((sum+2)%(n+1)!=1){
		fing++;
	}
	if((sum+3)%(n+1)!=1){
		fing++;
	}
	if((sum+4)%(n+1)!=1){
		fing++;
	}
	if((sum+5)%(n+1)!=1){
		fing++;
	}
	
	cout<<fing<<endl;
	
	return 0;
}
