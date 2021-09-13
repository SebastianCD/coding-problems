#include<bits/stdc++.h>
 
using namespace std;
 
long long int aaa(long long int n);
 
int main(){
	long long int n,x;
	cin>>n;
	if(n%2!=0)
	cout<<1+(n-aaa(n))/2<<endl;
	else
	cout<<1+(n-2)/2;
	return 0;
}
 
long long int aaa(long long int n){
    for(long long int i=2;i*i<=n;i++){
		if(n%i==0){
			return i;
		}
	}
	return n;
}