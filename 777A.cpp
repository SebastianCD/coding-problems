#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n,x;
	
	int v0[6]={0,1,2,2,1,0};	
	int v1[6]={1,0,0,1,2,2};
	int v2[6]={2,2,1,0,0,1};
	
	cin>>n>>x;
	
	n = n % 6;
	
	if(v0[n]==x){
		
		cout<<0<<endl;
			
	}
	else{
		if(v1[n]==x){
			
			cout<<1<<endl;
			
		}
		else{
			
			cout<<2<<endl;
			
		}
	}
			
	
	return 0;
}