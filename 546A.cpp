#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n, m, k;
	cin>>n>>m>>k;
	
	k=(k*(k+1))/2;
	k=k*n;
	
	if(k-m>0){
		cout<<k-m<<endl;
	}
	else{
		cout<<0<<endl;
	}
	
	return 0;
}