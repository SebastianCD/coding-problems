#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int q;
	cin>>q;
	while(q--){
		long long int n, k, cont=0;
		cin>>n>>k;
		while(n!=0){
			if(n%k==0){
				while(n%k==0){
					n/=k;
					cont++;
				}
			}
			else{
				cont+=n%k;
				n-=n%k;
			}
			
		}
	
		cout<<cont<<endl;
		
	}
	
	return 0;
}