#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n, i=0;
	cin>>n;
	
	while(n>0){
		n-=5;
		i++;
	}
	
	cout<<i<<endl;
	
	return 0;
}