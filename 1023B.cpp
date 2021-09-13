#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n,k;
	cin>>k>>n;
	
	
	if(k>1){
		if(k>=n/2){
		
			if(k>=n){
				cout<<(n-1)/2<<endl;
			}
			else{
				n=n-k;
				n=k-n;
				cout<<(n+1)/2<<endl; 
			
			}
		
		}
		else{
			cout<<0<<endl;
		}
	}
	else{
		cout<<0<<endl;
	}
	return 0;
}